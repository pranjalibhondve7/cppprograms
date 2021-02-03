#include<stdio.h>
#include<conio.h>
#include<iostream.h>
int asqrt(float a);
int main()
{
clrscr();
asqrt(10.6);
getch();
}
int asqrt(float a)
{
float A=a*a;
cout<<"Area of square is: "<<A<<endl;
return(A);
}
