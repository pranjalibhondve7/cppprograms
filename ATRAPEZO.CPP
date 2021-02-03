#include<stdio.h>
#include<conio.h>
#include<iostream.h>
int atrapezoid(float b1,float b2,float h);
int main()
{
clrscr();
atrapezoid(10.6,7,6);
getch();
}
int atrapezoid(float b1,float b2,float h)
{
float A=0.5*(b1+b2)*h;
cout<<"Area of trapezoid is: "<<A<<endl;
return(A);
}
