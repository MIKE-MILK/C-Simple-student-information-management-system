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
		cout << "                �༶����ϵͳ   " << endl;
		cout << "  *******************************************  " << endl;
		cout << "  1.��ʼ���༶" << "               2.��ʼ��ѧ��" << endl;
		cout << "  3.���ѧ��" << "                 4.ɾ��ѧ��" << endl;
		cout << "  5.�޸�ĳѧ��������" << "         6.�޸�ĳѧ�������" << endl;
		cout << "  *******************************************  " << endl;
		cout << "  ����ѡ��" << endl;
		cin >> x;
		switch (x)
		{
		case 1:
			c.print();
			cin >> ca;
			c.setClass(ca);
		case 2:
			cout << "�༶ " << c.getClass() << endl;
			cout << "�༶����:" << endl;
			int n;
			cin >> n;
			stu.print();
			for (int i = 0; i < n; i++)
			{
				stu.addStudent(s,n);
			}
			break;
		case 3:
			cout << "������Ҫ�޸ĵİ༶��" << endl;
			cin >> ca;
			c.setClass(ca);
			stu.add(s,n,a);
			break;
		case 4:
			cout << "������Ҫ�޸ĵİ༶��" << endl;
			cin >> ca;
			c.setClass(ca);
			c.getClass();
			int id;
			cout << "������Ҫɾ����ѧ��ѧ�ţ�" << endl;
			cin >> id;
			stu.deletStudnet(s,n,a);
			break;
		case 5:
			cout << "������Ҫ�޸ĵİ༶��" << endl;
			cin >> ca;
			c.setClass(ca);
			c.getClass();
			cout << "������Ҫ�޸ĵ�ѧ��ѧ�ţ�" << endl;
			cin >> id;
			cout << "�������޸ĵ�������Ϣ��" << endl;
			cin >> wei;
			stu.ModifyTheWeight(s,n,id,wei);
			break;
		case 6:
			cout << "������Ҫ�޸ĵİ༶��" << endl;
			cin >> ca;
			c.setClass(ca);
			c.getClass();
			cout << "������Ҫ�޸ĵ�ѧ��ѧ�ţ�" << endl;
			cin >> id;
			cout << "�������޸ĵ�������Ϣ��" << endl;
			cin >> hei;
			stu.ModifyTheHeight(s, n, a, hei);
			break;
		}
	}
}