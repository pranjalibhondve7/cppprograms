#include<conio.h>
#include<stdio.h>
#include<iostream.h>


class triangle
{
	public :
	float b,h,A;
	
	int area()
	{
		float b=6,h=9;
		A=(b*h)/2;
		
		cout<<"Area of triangle: "<<A<<endl;
	}
}t;

int main()
{
	clrscr();
	float z=t.area();
	
	return (z);
	getch();
}
	
