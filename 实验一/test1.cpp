#include <iostream>
#include <stdlib.h>
using namespace std;
class Student{
public :
	Student(int n,float s):num(n),score(s){}
	void change(int n,float s){num=n;score=s;}
	void display(){cout<<num<<" "<<score<<endl;}
private :
	int num;
	float score;
};
void fun(Student &s){
	s.display();
	s.change(120,98.5);
	s.display();
};
int main(){
Student stud(100,68.5);//创建一个Student对象
system("pause");
return 0;
}