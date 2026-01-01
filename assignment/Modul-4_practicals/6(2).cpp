//Create a class BankAccount with data members like balance and member functions
//like deposit and withdraw. Implement encapsulation by keeping the data members private.
#include<iostream>
using namespace std;
class BankAccount
{
	private:
	float bal=2000.89;
	public:
	void deposit()
	{
		int dep;
		cout<<"enter amount deposit: "<<endl;
		cin>>dep;
		bal=bal+dep;
		cout<<"balance after deposite: "<<bal<<endl;
	}	
	void withdraw()
	{
		int wi;
		cout<<"enter amount withdraw: "<<endl;
		cin>>wi;
		bal=bal-wi;
		cout<<"balance after withdrawl: "<<wi<<endl;
	}
};
int main()
{
	BankAccount b;
	b.deposit();
	b.withdraw();
}


