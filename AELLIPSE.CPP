#include<stdio.h>
#include<conio.h>
#include<iostream.h>
int aellipse(float r1,float r2);
int main()
{
clrscr();
aellipse(10.6,7);
getch();
}
int aellipse(float r1,float r2)
{
float A=3.14*r1*r2;
cout<<"Area of ellipse is: "<<A<<endl;
return(A);
}
