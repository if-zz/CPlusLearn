#include <iostream>
#include <string>
using namespace std;
class Employee
{
protected:
	int No;
	string name;
	float salary;
	static int totalNo;     // �Զ�����Ա�����
public:
	Employee();     //�Զ�����Ա����ţ������Ӽ������룬���ʳ�ֵΪ0
	~Employee(){};
	virtual void  pay() = 0;        //������н
	virtual void display() = 0;      //��ʾ��Ա��Ϣ
};
Employee::Employee() :salary(0){
	cout << "������������";
	cin >> name;
	totalNo++;
	No = totalNo;
}
class Manager :public Employee{
public:
	Manager();
	~Manager(){};
	void pay();
	void display();
};
Manager::Manager() :Employee(){}
void Manager::pay(){
	salary = 8000;
}
void Manager::display(){
	cout << "Manager:" << name << ",No." << No << ",salary:" << salary << endl;
}
class Techologer :public Employee{
private:
	int workhour;
public:
	Techologer();
	~Techologer(){};
	void pay();
	void display();
};
Techologer::Techologer() :Employee(){
	cout << "�����빤��ʱ�䣨Сʱ����";
	cin >> workhour;
}
void Techologer::pay(){
	salary = 50 * workhour;
}
void Techologer::display(){
	cout << "Techologer:" << name << ",No." << No << ",salary:" << salary << ",workhour:" << workhour << endl;
}
class Saler :public Employee{
private:
	double total;
public:
	Saler();
	~Saler(){};
	void pay();
	void display();
};
Saler::Saler() :Employee(){
	cout << "�����������ܶ";
	cin >> total;
}
void Saler::pay(){
	salary = 0.03*total;
}
void Saler::display(){
	cout << "Saler:" << name << ",No." << No << ",salary:" << salary << ",total:" << total << endl;
}

