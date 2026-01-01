//Write a C++ program that defines a class Calculator with functions for addition,
//subtraction, multiplication, and division. Create objects to use these functions.
#include<iostream>
using namespace std;
class calc
{
	public:
	int n1,n2,ans;
	void get()
	{
		cout<<"enter n1 and n2: ";
		cin>>n1>>n2;
	}
	void add()
	{
		ans=n1+n2;
		cout<<"addition is: "<<ans<<endl;
	}
	void sub()
	{
		ans=n1-n2;
		cout<<"subtraction is: "<<ans<<endl;
	}
	void mul()
	{
		ans=n1*n2;
		cout<<"multiplication is: "<<ans<<endl;
	}
	void div()
	{
		ans=n1/n2;
		cout<<"division is: "<<ans<<endl;
	}	
};
int main()
{	
	calc c;
	c.get();
	c.add();
	c.sub();
	c.mul();
	c.div();
	
}
