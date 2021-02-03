#include<stdio.h>
#include<conio.h>
#include<iostream.h>
int atriangle(float b,float h);
int main()
{
clrscr();
atriangle(10.6,7);
getch();
}
int atriangle(float b,float h)
{
float A=0.5*b*h;
cout<<"Area of Triangle is: "<<A<<endl;
return(A);
}
