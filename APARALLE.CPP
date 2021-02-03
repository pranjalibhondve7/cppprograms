#include<stdio.h>
#include<conio.h>
#include<iostream.h>
int aparallelogram(float b,float h);
int main()
{
clrscr();
aparallelogram(10.6,7);
getch();
}
int aparallelogram(float b,float h)
{
float A=b*h;
cout<<"Area of Parallelogram is: "<<A<<endl;
return(A);
}
