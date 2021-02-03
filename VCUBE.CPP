#include<stdio.h>
#include<conio.h>
#include<iostream.h>
int vcube(float a);
int main()
{
clrscr();
vcube(10);
getch();
}
int vcube(float a)
{
float V=a*a*a;
cout<<"Area of ellipse is: "<<V<<endl;
return(V);
}
