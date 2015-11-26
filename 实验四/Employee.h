#include <iostream>
#include <string>
using namespace std;
class Employee
{
protected:
	int No;
	string name;
	float salary;
	static int totalNo;     // 自动计算员工编号
public:
	Employee();     //自动计算员工编号，姓名从键盘输入，工资初值为0
	~Employee(){};
	virtual void  pay() = 0;        //计算月薪
	virtual void display() = 0;      //显示人员信息
};
Employee::Employee() :salary(0){
	cout << "请输入姓名：";
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
	cout << "请输入工作时间（小时）：";
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
	cout << "请输入销售总额：";
	cin >> total;
}
void Saler::pay(){
	salary = 0.03*total;
}
void Saler::display(){
	cout << "Saler:" << name << ",No." << No << ",salary:" << salary << ",total:" << total << endl;
}

