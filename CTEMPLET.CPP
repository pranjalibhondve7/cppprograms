#include<conio.h>
#include<iostream.h>

template<class t>
class Demo
{
public:
t a,b,c;

void set()
{
cout<<a<<b;
cin>>a>>b;
}
void add()
{
c=a+b;
}
void display()
{
cout<<"Sum is : "<<c
}


void main()
{
 clrscr();
 Demo <int>ob;
 ob.set();
 ob.add();
 ob.display();

 Demo<float>ob2;
 ob2.set();
 ob2.add();
 ob2.display();

 //cout<<fun(2.3,6);
 getch();
 }