#include <iostream>
#include <string>
#include <stdlib.h>
#include  "Employee.h"
using namespace std;
int Employee::totalNo = 0;
int main(){
	Employee *e1 = new Manager;
	Employee *e2 = new Techologer;
	Employee *e3 = new Saler;
	e1->pay();
	e1->display();
	e2->pay();
	e2->display();
	e3->pay();
	e3->display();
	system("pause");
	return 0;
}
/*
�麯���ڻ��������� ��virtual���� ���ǲ���ʵ�� ��ֻ��������̳л���ʱ��ʵ��

���غ����ǻ������Ѿ���ĳ��������������̳�ʱ����ʵ�֣�������ʵ�֣����ǻ���ķ�����

�麯��������������ͻ����еķ���ͬ��������������ͬ������ֵ������ͬ��*/