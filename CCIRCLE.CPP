#include<conio.h>
#include<stdio.h>
#include<iostream.h>

class circle
{
public:
 float A,r;

 void circumference()
 {
 r=8;
 A=2*3.14*r;
 cout<<"Circumference of circle is:"<<A;
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
 circle c;
 c.circumference();
// add1.display();
 getch();
 return 0;
 }
