//Write a C++ program that accepts an array of integers, calculates the sum and
//average, and displays the results
#include<iostream>
using namespace std;
int main()
{
	int i,arr[5],sum=0,avg=0;
	cout<<"enter elements of array: ";
	for( i=0;i<5;i++)
	{
		cin>>arr[i];
		sum=sum+arr[i];
	}
	avg=sum/5;
	cout<<"sum is: "<<sum<<"\t"<<"average is: "<<avg<<endl;
}

