#include<stdio.h>
#include<conio.h>
#include<iostream.h>
int div(int a,int b );
int main()
{
	clrscr();
	div(10,5);
	getch();
}
int div(int a,int b)
{
	int z=a/b;
	cout<<"division is:"<<z<<endl;
     return(z);
} 
