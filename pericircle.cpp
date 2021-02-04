#include<stdio.h>
#include<conio.h>
#include<iostream.h>
int pcircle( );
int main()
{
	clrscr();
	pcircle();
	getch();
}
int pcircle()
{
	float r=30;//r2=5;
	float p=2*3.14*r;
	cout<<"Perimeter of circle is:"<<p<<endl;
     return(p);
} 
