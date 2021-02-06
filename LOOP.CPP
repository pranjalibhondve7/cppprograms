 /*demo  program class & objects using loop*/


#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<string.h>

class demo
{
public:
int z,b,c;
int a[5];
  public:
    void set()
    {
      for(int i=0;i<=4;i++)
      {
      cout<<"Enter the no: "<<endl;
      cin>>a[i];
      }
    }

     void add()
     {
       z=b+c;
     }
     void display()
     {
     for(int i=0;i<=4;i++)
     {
       cout<<"value of a is: "<<a[i]<<endl;
     }
     }
    };

    void main()
    {
      clrscr();
      demo d;
      d.set();
      d.add();
      d.display();
      getch();
    }
