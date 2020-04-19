#include <iostream>
#include <string>
using namespace std;

class Person {
public:
	Person(const char* pN)
	{
		cout << "Constructing " << pN << endl;
		pName = new char[strlen(pN) + 1];
		if (pName != 0)
			strcpy_s(pName, strlen(pN) + 1, pN);
	}

	~Person()
	{
		cout << "Destructing " << pName << endl;
		delete pName;
		pName = nullptr;
	}
protected:
	char* pName;
};

void main()
{
	Person p1("Randy");
	Person p2 = p1;
}