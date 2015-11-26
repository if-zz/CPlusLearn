#include<iostream>
#include <stdlib.h>
#include<cmath>
#include<string.h>
#include "myComplex.h"
using namespace std;
int main(){
	myComplex c1;
	myComplex c2;
	cin >> c1;
	c2 = c1;
	cout << c1 << endl;
	cout << c2 << endl;
	cout << c1+c2 << endl;
	cout << c1-c2 << endl;
	cout << c1/c2 << endl;
	cout << c1*c2 << endl;
	cout << (c1+=c2) << endl;
	cout << (c1 -= c2) << endl;
	cout << (c1 *= c2) << endl;
	cout << (c1 /= c2) << endl;
	cout << "c1.real=" << c1.getReal() << "，c1.img=" << c1.getImaginary() << "，c1的模：" << c1.getModulus() << endl;
	myComplex a, b, c;
	a = b + c;
	cout << "a.real=" << a.getReal() << "，a.img=" << a.getImaginary() << "，a的模：" << a.getModulus() << endl;
	system("pause");
	return 0;
}
