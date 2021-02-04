#include<stdio.h>
#include<conio.h>
#include<iostream.h>
int arect( );
int main()
{
	clrscr();
	arect();
	getch();
}
int arect()
{
	float l=30,b=2;
	float A=l*b;
	cout<<"Area of rectangle is:"<<A<<endl;
     return(A);
} 
