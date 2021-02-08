       //WAP to find even odd no using default constructor
#include<conio.h>
#include<stdio.h>
#include<iostream.h>

class student
{
public:
 int num;
 public:

  student()  //create default constructor
 {
  cout<<"Enter number:"<<endl;
  cin>>num;
  }

 void even()
 {
 if(num%2==0)
 {
 cout<<"no. is even"<<num<<endl;
 }
 else{
 cout<<"no is odd" <<num<<endl;
 }
 }
 };


    void main()
    {
    clrscr();
    student s; //call default constructor
   // s.display;
    s.even();
   // s.display();
    getch();
    }
