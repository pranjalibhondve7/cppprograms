#include<stdio.h>
#include<conio.h>
#include<iostream.h>
int sum(int a,int b);
int main()
{
	clrscr();
	sum(10,7);
	getch();
}
int sum(int a,int b)
{
	int z=a+b;
	cout<<"sum  is:"<<z<<endl;
     return(z);
}