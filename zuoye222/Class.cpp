#include "Class.h"
#include<string>
#include<iostream>
using namespace std;
//Class
//进行数据的获取与存储
Class::Class(int nu) {
	num = nu;
}
void Class::setClass(int nu) {
	num = nu;
}
int Class::getClass() {
	return num;
}
//打印
void Class::print() {
	cout << "班级" <<endl;
}

//Student
//进行数据的获取与存储
Student::Student() {

}
Student::Student(int i,double wei,double hei) {
	id = i;
	weight = wei;
	height = hei;
}
double Student::getWeight() {
	return weight;
}
double Student::getHeight() {
	return height;
}
void Student::setWeight(double wei) {
	weight = wei;
}
void Student::setHeight(double hei) {
	height = hei;
}
void Student::setid(int nam) {
	id= nam;
}
int Student::getid(){
	return id;
}
//打印
void Student::print() {
	cout << "姓名：" << "体重：" << "身高：" << endl;
}
//查找学生的信息
int Student::findStudent(Student stu,int n,int fin) {
	int j = 0;
	int m = 0;
	for (int i = 0; i <n; i++)
	{
		if (stu.getid()==fin)
		{
			m = i;
			break;
		}
	}
	return m;
}
//添加学生的信息
void Student::addStudent(Student*stu,int n) {
	double w,h;
	int i;
	cout << "学生的学号：" << endl;
	cin >> i;
	stu[n].setid(i);
	cout << "学生的体重：" << endl;
	cin >> w;
	stu[n].setWeight(w);
	cout << "学生的身高：" << endl;
	cin >> h;
	stu[n].setHeight(h);
	stu[n].getStudent(stu,n);
}
//添加某个学生的信息
void Student::add(Student* stu,int n, int Num) {
	int j=n;
	for (int i = 0; i < n; i++)
	{
		stu[i].addStudent(stu,i);
		j++;
	}
	cout << "学生数：" << j << endl;
}
//删除学生的信息
int Student::deletStudnet(Student*stu, int n, int num) {
	int j = 0;
	for (int i = 0; i <n; i++)
	{
		if (stu[i].getid()==num)
		{
			for (j=i; j < n-1;j++)
			{
				stu[j] = stu[j + 1]; 
			}
			n--;
			i--;
		}
	}
	cout << "剩余学生人数：" << n << endl;
	return n;
}
//修改学生的身高信息
double Student::ModifyTheHeight(Student* stu, int n, int num,double hei) {
	double h = 0;
	for (int i = 1; i <n+1; i++)
	{
		if (stu[i].getid()==num)
		{
			h = hei;
			stu[i].setHeight(h);
			stu[i].getStudent(stu, n);
		}
	}
	cout << "修改的数据：" << h << endl;
	return h;
}
//修改学生的体重信息
double Student::ModifyTheWeight(Student*stu,int n, int num,double wei) {
	double w = 0;
	for (int i = 1; i < n+1; i++)
	{
		if (stu[i].getid() == num)
		{
			w = wei;
			stu[i].setWeight(w);
			stu[i].getStudent(stu, n);
		}
	}
	cout << "修改的数据：" << w << endl;
	return w;
}
//遍历获得所有学生的信息
void Student::getStudent(Student*stu,int n) {
	for (int i = 1; i <n+1; i++)
	{
		cout <<"学号："<<stu[i].getid() << endl;
		cout << "身高：" << stu[i].getHeight() << endl;
		cout << "体重：" << stu[i].getWeight() << endl;
	}
}