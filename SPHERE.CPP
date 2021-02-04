#include<conio.h>
#include<stdio.h>
#include<iostream.h>

class sphere
{
public:
 float A,r;

 void area()
 {
 r=8;
 A=4*3.14*r*r;
 cout<<"Area of sphere is:"<<A;
 }
};
/* void display()
 {
 cout<<"Addition is:"<<c;
 }
 };  */

 int main()
 {
 clrscr();
 sphere s;
 s.area();
// add1.display();
 getch();
 return 0;
 }
