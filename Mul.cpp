#include<stdio.h>
#include<conio.h>
#include<iostream.h>
int mul(int a,int b );
int main()
{
	clrscr();
	mul(10,5);
	getch();
}
int mul(int a,int b)
{
	int z=a*b;
	cout<<"multiplication is:"<<z<<endl;
     return(z);
} 
