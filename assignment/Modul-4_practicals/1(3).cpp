//. POP vs. OOP Comparison Program
//o Write two small programs: one using Procedural Programming (POP) to calculate the area of a rectangle,
// and another using Object-Oriented Programming (OOP) with a class and object for the same task.
//o Objective: Highlight the difference between POP and OOP approaches.

#include <iostream>
#include <stdio.h>
using namespace std;
float POP(float length, float width)
{
    return length * width; 
}
class rect
{
	float ans,l,w;
	public:
		void get()
		{
			cout<<"\n\nenter l and w value for OOP "<<endl;
			cin>>l>>w;
		}
		void calculate()
		{
			ans=l*w;
			cout<<"area is "<<ans<<endl;
		}
};
int main()
{
     float length,width;
     printf("enter l and w value ");
     scanf("%f%f",&length,&width);
     printf("ans is : %f",POP(length,width));
     
     rect r;
     r.get();
     r.calculate();
}

