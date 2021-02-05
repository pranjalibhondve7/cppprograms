#include<conio.h>
#include<stdio.h>
#include<iostream.h>
class student
{
public:
 char name[30],address[50];
 int id;

 void data()
 {
 cout<<"Enter name:"<<endl;
 cin>>name;
  cout<<"Enter address:"<<endl;
 cin>>address;
   cout<<"Enter id:"<<endl;
 cin>>id;
 }
 void display()
 {
  cout<<" Name is:"<<name<<endl;
   cout<<" Address is:"<<address<<endl;
    cout<<" Id is:"<<id<<endl;
    }
    }s;
    void main()
    {
    clrscr();
    s.data();
    s.display();
    getch();
    }




