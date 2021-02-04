#include<stdio.h>
#include<conio.h>
#include<iostream.h>
int atrapezoid( );
int main()
{
	clrscr();
	atrapezoid();
	getch();
}
int atrapezoid()
{
	float b1=30,h=2,b2=5;
	float A=0.5*(b1+b2)*h;
	cout<<"Area of Trapezoid is:"<<A<<endl;
     return(A);
} 
