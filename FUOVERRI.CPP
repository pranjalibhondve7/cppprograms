//Function overriding
#include<conio.h>
#include<iostream.h>

class one
{
public:
	void dis()
	{
	cout<<"One";
	}
};
class two:public one
{       public:
	void dis()
	{
	//one::dis();   //override fun display
	cout<<"Two";
	}
};
void main()
{   clrscr();
   two ob;
   ob.dis();
   getch();
}
