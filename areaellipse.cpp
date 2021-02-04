#include<stdio.h>
#include<conio.h>
#include<iostream.h>
int aellipse( );
int main()
{
	clrscr();
	aellipse();
	getch();
}
int aellipse()
{
	float r1=30,r2=5;
	float A=3.14*r1*r2;
	cout<<"Area of ellipse is:"<<A<<endl;
     return(A);
} 
