#include<stdio.h>
#include<conio.h>
#include<iostream.h>
int atriangle( );
int main()
{
	clrscr();
	atriangle();
	getch();
}
int atriangle()
{
	float b=30,h=2;
	float A=0.5*b*h;
	cout<<"Area of triangle is:"<<A<<endl;
     return(A);
} 
