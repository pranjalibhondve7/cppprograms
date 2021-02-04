#include<conio.h>
#include<stdio.h>
#include<iostream.h>

class rectangle
{
public:
 int l,b,A;

 void rect()
 {
 l=12,b=15;
 A=l*b;
 cout<<"Area of rectangle is:"<<A;
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
 rectangle r;
 r.rect();
// add1.display();
 getch();
 return 0;
 }
