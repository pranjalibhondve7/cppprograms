#include<iostream.h>
#include<conio.h>

class one
{
 public:
 virtual void dis(){
  cout<<"one";
  }
  };
  class two:public one //Single inheritance
{
 public:
  void dis(){
  cout<<"two";
  }
  };
  void main()
  {
  clrscr();
  one ob,*obpt;
  obpt= &ob;
  obpt ->dis();
  two ob2;
  obpt= &ob2;
  obpt->dis();
  getch();
  }