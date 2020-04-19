#include <iostream>
#include <string>
using namespace std;

class Student {
public:
	Student(const char* pName = "no name")
	{
		cout << "Constructing new student " << pName << endl;
		strncpy_s(name, sizeof(name), pName, sizeof(name) - 1);
	}

	Student(Student& s)
	{
		cout << "Constructing copy of " << s.name << endl;
		strcpy_s(name, "copy of ");
		strcat_s(name, s.name);
	}

	~Student()
	{
		cout << "Destructing " << name << endl;
	}
protected:
	char name[40];
};

class Tutor {
public:
	Tutor(Student& s) :student(s)
	{
		cout << "Constructing tutor\n";
	}
protected:
	Student student;
};

void fn(Tutor tutor)
{
	cout << "In function fn()\n";
}

void main()
{
	Student randy("Randy");
	Tutor tutor(randy);
	cout << "Calling fn()\n";
	fn(tutor);
	cout << "Returned from fn()\n";
}
