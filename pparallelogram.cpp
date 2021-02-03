#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void pparallelogram(float a,float b);
int main()
{
	clrscr();
	pparallelogram(10.5,7);
	getch();
}
int pparallelogram(float a,float b)
{
	float p=2(a+b);
	cout<<"Perimeter of parallelogram is:"<<p<<endl;
     return(p);
}