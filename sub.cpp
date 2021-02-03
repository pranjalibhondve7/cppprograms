#include<stdio.h>
#include<conio.h>
#include<iostream.h>
int sub(int a,int b );
int main()
{
	clrscr();
	sub(10,5);
	getch();
}
int sub(int a,int b)
{
	int z=a-b;
	cout<<"substraction  is:"<<z<<endl;
     return(z);
} 
