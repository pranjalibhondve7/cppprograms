#include<iostream>
#include<conio.h>

using namespace std;
void fun()
{
	static int x=0;
	x=x+1;
	cout<<"x="<<x<<endl;
}


void main()
{
	
 clrscr();
	fun();
	fun();
	fun();
	getch();
}