#include<stdio.h>
#include<conio.h>
#include<iostream.h>
int asqrt(float r);
int main()
{
clrscr();
asqrt(10.6);
getch();
}
int asqrt(float r)
{
float A=3.14*r*r;
cout<<"Area of circle is: "<<A<<endl;
return(A);
}
