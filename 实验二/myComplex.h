#include<iostream>
#include <stdlib.h>
#include<cmath>
#include<string.h>
using namespace std;
class myComplex
{
public:
	myComplex() :real(5), img(5){};
	myComplex(int a) :real(a), img(a){};
	myComplex(int a, int b) :real(a), img(b){};
	myComplex(myComplex& v){
		real = v.real;
		img = v.img;
	}
	double getReal(){ return real; };  //���ظ�����ʵ��
	double getImaginary(){ return img; };  //���ظ������鲿
	double getModulus(){ return sqrt(real*real + img*img); }; //���ظ�����ģ
	myComplex& operator=(myComplex& rhs);  //�����ĸ�ֵ     
	myComplex& operator+=(myComplex& rhs);
	myComplex& operator-=(myComplex& rhs);
	myComplex& operator*=(myComplex& rhs);
	myComplex& operator/=(myComplex& rhs);
	friend myComplex operator+(myComplex m, myComplex n);
	friend myComplex operator-(myComplex m, myComplex n);
	friend myComplex operator*(myComplex m, myComplex n);
	friend myComplex operator/(myComplex m, myComplex n);
	friend ostream& operator<<(ostream& os, myComplex c);
	friend istream& operator>>(istream& is, myComplex& c);

private:
	double real;
	double img;

};
myComplex& myComplex::operator=(myComplex& rhs){
	real = rhs.real;
	img = rhs.img;
	return *this;
}
myComplex& myComplex::operator+=(myComplex& rhs){
	real += rhs.real;
	img += rhs.img;
	return *this;
}
myComplex& myComplex::operator-=(myComplex& rhs){
	real -= rhs.real;
	img -= rhs.img;
	return *this;
}
myComplex& myComplex::operator*=(myComplex& rhs){
	double tmp = real*rhs.real - img*rhs.img;
	img = img*rhs.real + real*rhs.img;
	real = tmp;
	return *this;
}
myComplex& myComplex::operator/=(myComplex& rhs){
	double tmp = (real*rhs.real + img*rhs.img) / (rhs.real*rhs.real + rhs.img*rhs.img);
	img = (img*rhs.real - real*rhs.img) / (rhs.real*rhs.real + rhs.img*rhs.img);
	real = tmp;
	return *this;
}
myComplex operator+(myComplex m, myComplex n){
	myComplex tmp(m.real + n.real, m.img + n.img);
	return tmp;
}
myComplex operator-(myComplex m, myComplex n){
	myComplex tmp(m.real - n.real, m.img - n.img);
	return tmp;
}
myComplex operator*(myComplex m, myComplex n){
	myComplex tmp(m.real * n.real - m.img*n.img, m.img*n.real + m.real*n.img);
	return tmp;
}
myComplex operator/(myComplex m, myComplex n){
	myComplex tmp((m.real * n.real + m.img*n.img) / (n.real*n.real + n.img*n.img), (m.img*n.real - m.real*n.img) / (n.real*n.real + n.img*n.img));
	return tmp;
}
ostream& operator<<(ostream& os, myComplex c){
	os << '(' << c.real << ',' << c.img << ')';
	return os;
}
istream& operator>>(istream& is, myComplex& c){
	is >> c.real >> c.img;
	return is;
}