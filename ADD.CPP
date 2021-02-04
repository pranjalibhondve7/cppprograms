#include<conio.h>
#include<stdio.h>
#include<iostream.h>

class addition
{
public:
 int a,b,c;
 void sum()
 {
 a=12,b=15;
 c=a+b;
 }
 void display()
 {
 cout<<"Addition is:"<<c;
 }
 };

 int main()
 {
 clrscr();
 addition add1;
 add1.sum();
 add1.display();
 getch();
 }
