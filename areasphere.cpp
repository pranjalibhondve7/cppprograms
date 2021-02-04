#include<stdio.h>
#include<conio.h>
#include<iostream.h>
int asphere( );
int main()
{
	clrscr();
	asphere();
	getch();
}
int asphere()
{
	float r=30;//r2=5;
	float A=4*3.14*r*r;
	cout<<"Area of sphere  is:"<<A<<endl;
     return(A);
} 
