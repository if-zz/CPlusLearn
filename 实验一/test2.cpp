#include <iostream>
#include <stdlib.h>
using namespace std;
class Iteam{
public: 
	Iteam(int n,int q,double p):num(n),quantity(q),price(p){}
		double eachSum(){
			if(quantity>10){
			return quantity*price*0.98;
			}
			else return quantity*price;
		}
		int getQuantity(){
		return quantity;
		}
	    static int count;
		static double sum; 
		static  void  averagePrice(int c,double s){
		double ap=s/c;
		cout<<"average price is "<<ap<<endl;
		}
private :
	    int num;
		int quantity;
		double price;
};

int Iteam::count=0;
double Iteam::sum=0;
int main(){
Iteam i1(101,5,23.5);
Iteam::count+=i1.getQuantity();
Iteam::sum+=i1.eachSum();
Iteam i2(102,12,24.56);
Iteam::count+=i2.getQuantity();
Iteam::sum+=i2.eachSum();
Iteam i3(103,100,21.5);
Iteam::count+=i3.getQuantity();
Iteam::sum+=i3.eachSum();
cout<<"Sum price is "<<Iteam::sum<<endl;
Iteam::averagePrice(Iteam::count,Iteam::sum);
system("pause");
return 0;
}