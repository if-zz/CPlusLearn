// t.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <string>
#include <stdlib.h>
#include "Person.h"
using namespace std;
int Person::counter = 0;
int Teacher::counter = 0;
int Undergraduate::counter = 0;
int Postgraduate::counter = 0;
int main(){
	Person p1;
	Person p2("Tom",22,'m');
	p2.show();
	Teacher t1;
	Teacher t2("Mike",33,'m',201313,"officer");
	t1.set("Mary",32,'f',23324,"master");
	t1.show();
	t2.show();
	Undergraduate u1("Jason",20,'m',2015234,"language");
	u1.show();
	Postgraduate pp("Sam",25,'m',20132323,"software","Dr.Pull");
	pp.show();
	cout<<p1.get_counter()<<","<<t1.get_counter()<<","<<u1.get_counter()<<","<<pp.get_counter()<<endl;
	system("pause");
}




