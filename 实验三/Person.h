#include <iostream>
#include <string>
using namespace std;
class Person
{
protected:
	string name;
	int age;
	char gender;
	static int counter;     // 统计总人数
public:
	Person();
	Person(string, int, char);  //通过参数初始化成员
	~Person(){};
	void set(string, int, char);   //设置人员基本信息
	void show();             //显示人员基本信息
	int get_counter();          //获取人员总数     
};
Person::Person(){ counter++; };
Person::Person(string n, int a, char g){
	name = n;
	age = a;
	gender = g;
	counter++;
}
void Person::set(string n, int a, char g){
	name = n;
	age = a;
	gender = g;
}
void Person::show(){
	cout << "Person->name:" << name << " age:" << age << " gender;" << gender << endl;
}
int Person::get_counter(){
	return counter;
}

class Teacher :public Person{
protected:
	int wn;
	string rank;
	static int counter;
public:
	Teacher();
	~Teacher(){};
	Teacher(string n, int a, char g, int w, string r);
	void show();
	void set(string n, int a, char g, int w, string r);
	int get_counter();
};
Teacher::Teacher() :Person(){ counter++; };
Teacher::Teacher(string n, int a, char g, int w, string r) :Person(n, a, g), wn(w), rank(r){
		name = n;
		age = a;
		gender = g;
		counter++;
	};
void Teacher:: show(){
		cout << "Teacher->name:" << this->name << " age:" << age << " gender;" << gender << " workNo:" << wn << " rank:" << rank << endl;
	}
void Teacher::set(string n, int a, char g, int w, string r){
		Person::set(n, a, g);
		/*name=n;
		age=a;
		gender=g;*/
		wn = w;
		rank = r;
	}
int Teacher::get_counter(){
	return counter;
}

class Undergraduate :public Person{
protected:
	int stn;
	string department;
	static int counter;
public:
	Undergraduate();
	~Undergraduate(){};
	Undergraduate(string n, int a, char g, int w, string r);
	void show();
	void set(string n, int a, char g, int w, string r);
	int get_counter();
};
Undergraduate::Undergraduate():Person(){
	counter++;
}
Undergraduate::Undergraduate(string n, int a, char g, int w, string r) :Person(n, a, g), stn(w), department(r){
		name = n;
		age = a;
		gender = g;
		counter++;
	}
void Undergraduate::show(){
		cout << "Undergraduate->name:" << this->name << " age:" << age << " gender;" << gender << " studentNo:" << stn << " department:" << department << endl;
	}
void Undergraduate::set(string n, int a, char g, int w, string r){
		Person::set(n, a, g);
		/*name=n;
		age=a;
		gender=g;*/
		stn = w;
		department = r;
	}
int Undergraduate::get_counter(){
	return counter;
}

class Postgraduate :public Person{
protected:
	int stn;
	string department;
	string teacher;
	static int counter;
public:
	Postgraduate();
	~Postgraduate(){};
	Postgraduate(string n, int a, char g, int w, string r,string t);
	void show();
	void set(string n, int a, char g, int w, string r,string t);
	int get_counter();
};
Postgraduate::Postgraduate():Person(){
	counter++;
}
Postgraduate::Postgraduate(string n, int a, char g, int w, string r,string t) :Person(n, a, g), stn(w), department(r),teacher(t){
		name = n;
		age = a;
		gender = g;
		counter++;
	}
void Postgraduate::show(){
		cout << "Postgraduate->name:" <<name << " age:" << age << " gender;" << gender << " studentNo:" << stn << " department:" << department <<" teacher:"<<teacher<< endl;
	}
void Postgraduate::set(string n, int a, char g, int w, string r,string t){
		Person::set(n, a, g);
		/*name=n;
		age=a;
		gender=g;*/
		stn = w;
		department = r;
		teacher = t;
	}
int Postgraduate::get_counter(){
	return counter;
}
