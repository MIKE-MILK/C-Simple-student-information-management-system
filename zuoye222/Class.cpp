#include "Class.h"
#include<string>
#include<iostream>
using namespace std;
//Class
//�������ݵĻ�ȡ��洢
Class::Class(int nu) {
	num = nu;
}
void Class::setClass(int nu) {
	num = nu;
}
int Class::getClass() {
	return num;
}
//��ӡ
void Class::print() {
	cout << "�༶" <<endl;
}

//Student
//�������ݵĻ�ȡ��洢
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
//��ӡ
void Student::print() {
	cout << "������" << "���أ�" << "��ߣ�" << endl;
}
//����ѧ������Ϣ
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
//���ѧ������Ϣ
void Student::addStudent(Student*stu,int n) {
	double w,h;
	int i;
	cout << "ѧ����ѧ�ţ�" << endl;
	cin >> i;
	stu[n].setid(i);
	cout << "ѧ�������أ�" << endl;
	cin >> w;
	stu[n].setWeight(w);
	cout << "ѧ������ߣ�" << endl;
	cin >> h;
	stu[n].setHeight(h);
	stu[n].getStudent(stu,n);
}
//���ĳ��ѧ������Ϣ
void Student::add(Student* stu,int n, int Num) {
	int j=n;
	for (int i = 0; i < n; i++)
	{
		stu[i].addStudent(stu,i);
		j++;
	}
	cout << "ѧ������" << j << endl;
}
//ɾ��ѧ������Ϣ
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
	cout << "ʣ��ѧ��������" << n << endl;
	return n;
}
//�޸�ѧ���������Ϣ
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
	cout << "�޸ĵ����ݣ�" << h << endl;
	return h;
}
//�޸�ѧ����������Ϣ
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
	cout << "�޸ĵ����ݣ�" << w << endl;
	return w;
}
//�����������ѧ������Ϣ
void Student::getStudent(Student*stu,int n) {
	for (int i = 1; i <n+1; i++)
	{
		cout <<"ѧ�ţ�"<<stu[i].getid() << endl;
		cout << "��ߣ�" << stu[i].getHeight() << endl;
		cout << "���أ�" << stu[i].getWeight() << endl;
	}
}