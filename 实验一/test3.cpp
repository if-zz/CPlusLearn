#include <iostream>
#include <stdlib.h>
using namespace std;
class Box{
public :
	Box(){}
	Box(double l=5):a(l){}
	~Box(){}
	void seta(double l);
	void getvolume();
	void getarea();
	void disp();
private:
	double a;
	double volume;
	double area;

};
void Box::seta(double l){
	a=l;
}
void Box::getvolume(){
    volume=a*a*a;
}
void Box::getarea(){
    area=a*a*6;
}
void Box::disp(){
   cout<<"a is "<<a<<",volume is "<<volume<<",area is "<<area<<endl;
}
int main(){
	Box b;
	b.getarea();
	b.getvolume();
	b.disp();
	Box b1(6.0);
	b1.seta(7.0);
	b1.getarea();
	b1.getvolume();
	b1.disp();
	system("pause");
}