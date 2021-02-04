#include<conio.h>
#include<stdio.h>
#include<iostream.h>


class parallelogram
{
	public :
	float b,h,A;
	
	void area()
	{
		float b=25,h=8;
		A=b*h;
		cout<<"Area of trapezoid : "<<A<<endl;
	}
}p;

int main()
{
	clrscr();
	p.area();
	getch();
}
	
