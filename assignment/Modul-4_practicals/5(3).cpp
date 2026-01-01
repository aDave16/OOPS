//Write a program that implements inheritance using a base class Person and derived
//classes Student and Teacher. Demonstrate reusability through inheritance.
#include<iostream>
using namespace std;
class person
{
	public:
		int cno;
		string name;
		void get()
		{
			cout<<"enter name and contact number: "<<endl;
			cin>>name>>cno;
		}
		void dis()
		{
			cout<<"name is: "<<name<<"\t"<<"number: "<<cno<<endl<<endl;
		}
		void p()
		{
			cout<<"in person class"<<endl;
		}
};
class student:public person
{
	public:
	void s()
		{
			cout<<"in student class"<<endl;
		}
};
class teacher:public person
{
	public:
	void t()
		{
			cout<<"in teacher class"<<endl;
		}
};
int main()
{
	person p1;
	p1.p();
	p1.get();
	p1.dis();
	
	student s1;
	s1.s();
	s1.get();
	s1.dis();
	 
	teacher t1;
	t1.t();
	t1.get();
	t1.dis();
}
