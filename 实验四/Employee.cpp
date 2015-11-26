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
虚函数在基类中声明 用virtual修饰 但是并不实现 ，只是在子类继承基类时才实现

重载函数是基类中已经有某个函数，当子类继承时重新实现（基类已实现）覆盖基类的方法。

虚函数和重载在子类和基类中的方法同名，参数类型相同，返回值类型相同。*/