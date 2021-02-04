#include<stdio.h>
#include<conio.h>
#include<iostream.h>
int vcube( );
int main()
{
	clrscr();
	vcube();
	getch();
}
int vcube()
{
	float a=30;//r2=5;
	float v=a*a*a;
	cout<<"Volume of cube is:"<<v<<endl;
     return(v);
} 
