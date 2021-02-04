#include<conio.h>
#include<stdio.h>
#include<iostream.h>

class circle
{
public:
 float A,r;

 void area()
 {
 r=8;
 A=3.14*r*r;
 cout<<"Area of circle is:"<<A;
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
 c.area();
// add1.display();
 getch();
 return 0;
 }
