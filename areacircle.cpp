#include<stdio.h>
#include<conio.h>
#include<iostream.h>
int acircle( );
int main()
{
	clrscr();
	acircle();
	getch();
}
int acircle()
{
	float r=30;//,b=2;
	float A=3.14*r*r;
	cout<<"Area of circle is:"<<A<<endl;
     return(A);
} 
