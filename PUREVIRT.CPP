//Pure Virtual Function
#include<conio.h>
#include<iostream.h>

class one
{
public:
	virtual void dis()=0;

};
class two:public one
{
public:
	void dis()
	{
	// one::dis ();   //override fun display
	cout<<"Two";
	}
};
void main()
{
clrscr();
  // one ob1;
   two ob2;
   ob2.dis();
   getch();
}
