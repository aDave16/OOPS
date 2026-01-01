//1. Simple Calculator Using Functions
//o Write a C++ program that defines functions for basic arithmetic operations (add,subtract, multiply, divide). 
//The main function should call these based on user input.
#include<iostream>
using namespace std;
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int main()
{
	int a, b;
	char op;	
	cout << "Enter first num: ";
	cin >> a;
	cout << "Enter operator (+, -, *, /): ";
	cin >> op;
	cout << "Enter second num: ";
	cin >> b;
	
	switch(op)
	{
		case '+':
			cout << "Result = " << add(a,b) << endl;
			break;
		case '-':
			cout << "Result = " << sub(a,b) << endl;
			break;
		case '*':
			cout << "Result = " << mul(a,b) << endl;
			break;
		case '/':
			cout << "Result = " << div(a,b) << endl;
			break;
	}
	return 0;
}

int add(int a, int b)
{
	return a + b;
}
int sub(int a, int b)
{
	return a - b;
}
int mul(int a, int b)
{
	return a * b;
}
int div(int a, int b)
{
	return a / b;
}
