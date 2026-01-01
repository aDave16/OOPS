//Write a C++ program to perform matrix addition on two 2x2 matrices.
#include<iostream>
using namespace std;
int main()
{
	int i,j;
	int a[2][2];
	int b[2][2];
	int sum[2][2];
	cout<<"enter 1st array value: ";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"enter 2nd array value: ";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cin>>b[i][j];
		}
	}
	cout<<"sum of 2 matrices : "<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
			cout<<sum[i][j]<<"\t";
		}
		cout<<endl;
	}
}
