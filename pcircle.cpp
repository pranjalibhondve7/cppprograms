#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void pcircle(float r);
int main()
{
	clrscr();
	pcircle(10.5);
	getch();
}
int pcircle(float r)
{
	float p=2*3.14*r;
	cout<<"Perimeter of circle is:"<<p<<endl;
     return(p);
}