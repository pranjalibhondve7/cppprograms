#include<stdio.h>
#include<conio.h>
#include<iostream.h>
int pparallelogram( );
int main()
{
	clrscr();
	pparallelogram();
	getch();
}
int pparallelogram()
{
	float a=30,b=5;
	float p=2*(a+b);
	cout<<"Perimeter of parallelogram is:"<<p<<endl;
     return(p);
} 
