#ifndef TDATE
#define TDATE
#include<string>
class Class
{
public:
	Class(int);
	int getClass();
	void setClass(int);
	void print();
private:
	int num;
};
class Student
{
public:
	Student();
	Student(int,double,double);
	double getWeight();
	void setWeight(double);
	double getHeight();
	void setHeight(double);
	void print();
	void setid(int);
	int getid();
	void getStudent(Student* stu,int n);
	void add(Student* stu,int n, int Num);
	int findStudent(Student stu,int n,int fin);
	int deletStudnet(Student*stu, int n, int deleteStudentNum);
	void addStudent(Student*stu,int n);
	double ModifyTheWeight(Student*stu,int n,int Num,double wei);
	double ModifyTheHeight(Student*stu,int n,int Num,double hei);
private:
	int id;
	double weight;
	double height;
	Student* Su;
	int a;
};
#endif