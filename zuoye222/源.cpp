#include<iostream>
#include "Class.h"
using namespace std;
int x = 0;
int ca = 0;
int i = 0; double wei = 0; double hei = 0;
Student stu(i, wei, hei);
Student s[50];
Class c(ca);
int a = stu.getid();
double b = stu.getHeight();
double d=stu.getWeight();
int main() {
	while (1) {
		cout << "  *******************************************  " << endl;
		cout << "                班级管理系统   " << endl;
		cout << "  *******************************************  " << endl;
		cout << "  1.初始化班级" << "               2.初始化学生" << endl;
		cout << "  3.添加学生" << "                 4.删减学生" << endl;
		cout << "  5.修改某学生的体重" << "         6.修改某学生的身高" << endl;
		cout << "  *******************************************  " << endl;
		cout << "  进行选择：" << endl;
		cin >> x;
		switch (x)
		{
		case 1:
			c.print();
			cin >> ca;
			c.setClass(ca);
		case 2:
			cout << "班级 " << c.getClass() << endl;
			cout << "班级人数:" << endl;
			int n;
			cin >> n;
			stu.print();
			for (int i = 0; i < n; i++)
			{
				stu.addStudent(s,n);
			}
			break;
		case 3:
			cout << "请输入要修改的班级：" << endl;
			cin >> ca;
			c.setClass(ca);
			stu.add(s,n,a);
			break;
		case 4:
			cout << "请输入要修改的班级：" << endl;
			cin >> ca;
			c.setClass(ca);
			c.getClass();
			int id;
			cout << "请输入要删除的学生学号：" << endl;
			cin >> id;
			stu.deletStudnet(s,n,a);
			break;
		case 5:
			cout << "请输入要修改的班级：" << endl;
			cin >> ca;
			c.setClass(ca);
			c.getClass();
			cout << "请输入要修改的学生学号：" << endl;
			cin >> id;
			cout << "请输入修改的数据信息：" << endl;
			cin >> wei;
			stu.ModifyTheWeight(s,n,id,wei);
			break;
		case 6:
			cout << "请输入要修改的班级：" << endl;
			cin >> ca;
			c.setClass(ca);
			c.getClass();
			cout << "请输入要修改的学生学号：" << endl;
			cin >> id;
			cout << "请输入修改的数据信息：" << endl;
			cin >> hei;
			stu.ModifyTheHeight(s, n, a, hei);
			break;
		}
	}
}