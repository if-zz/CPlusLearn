#include<iostream>
#include <stdlib.h>
using namespace std;
class Date;             	//��Date�����ǰ��������
class Time				//����Time��
{
	public:
		Time(int, int, int);		//���캯��
		friend void display(Date &d,Time &t); //display�ǳ�Ա�������β���Date����������
	private:
		int hour;
		int minute;
		int sec;
};

class Date                       //����Date��
{
	public:
		Date(int, int, int);
		friend void display(Date &,Time &t); //����Time�е�display����Ϊ��Ԫ��Ա����
	private:
		int month;
		int day;
		int year;
};

Time::Time(int h, int m, int s)     //��Time�Ĺ��캯��
{
	hour=h;
	minute=m;
	sec=s; 
}

void display(Date &d,Time &t)    //display������������꣬�£��պ�ʱ���֣���
{
	cout<<d.month<<"/"<<d.day<<"/"<<d.year<<endl;    cout<<t.hour<<":"<<t.minute<<":"<<t.sec<<endl;      
} 

Date::Date(int m,int d,int y)     //��Date�Ĺ��캯��
{
	month=m;
	day=d; 
	year=y; 
}

int main()
{
	Time t1(16,02,34);           //����Time�����t1
	Date d1(10,13,2015);          //����Date�����d1
	display(d1,t1);     //����t1�е�display������ʵ����Date�����d1
	system("pause");
	return 0;
}
