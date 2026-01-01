//3. Operator Demonstration
//o Write a C++ program that demonstrates arithmetic, relational, logical, and bitwise operators. Perform operations using each type of operator and display the results.

#include<iostream>
using namespace std;

int main()
{
	int a, b ;
	cout << "Enter a: ";
	cin >> a;
	
	cout << "Enter b: ";
	cin >> b;	
	cout << "\nArithmatic operator\n";
	cout << "a + b = " << a+b << endl;
	cout << "a - b = " << a-b << endl;
	cout << "a * b = " << a*b << endl;
	cout << "a / b = " << a/b << endl;
		
	cout << "\n==relational operator==\n";
	cout << "a == b : " << (a == b) << endl;
	cout << "a < b : " << (a < b) << endl;
	cout << "a > b : " << (a > b) << endl;
	cout << "a != b : " << (a != b) << endl;
	cout << "a >= b : " <<(a >= b) << endl;
	cout << "a <= b : " << (a <= b)<<endl;
	
	cout << "\n==Logical Operator==\n";
	cout<< "(a > 0 && b > 0) : " << (a > 0 && b > 0) << endl;
	cout << "( a > 0 || b < 0 ) : " << (a > 0 || b < 0) << endl;
	cout << "!(a = b) : " << !(a = b) << endl;
	
	cout << "\n==Bitwise Operator==\n";
	cout << "a & b :" << (a & b) << endl;
	cout << "a | b : " << (a | b) << endl;
	cout << "a ^ b : " << (a ^ b) << endl;
	cout << "a << 1 : " << (a << 1) << endl;
	cout << "a >> 1 : " << (a >> 1) << endl;
	
	return 0;	
}
