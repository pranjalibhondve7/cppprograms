#include<conio.h>
#include<stdio.h>
#include<iostream.h>
int arectangle(int l,int b);
int main()
{
clrscr();
arectangle(10,20);
getch();
}
int arectangle(int l,int b)
{
 int A=l*b;
 cout<<"Area of rectangle is:" <<A<<endl;
 return(A);
}