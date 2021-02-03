#include<stdio.h>
#include<conio.h>
#include<iostream.h>
int psqrt(float a);
int main()
{
clrscr();
psqrt(10);
getch();
}
int psqrt(float a)
{
float p=4*a;
cout<<"perimeter of square is: "<<p<<endl;
return(p);
}
