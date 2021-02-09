//Unary operator overloading
#include<conio.h>
#include<iostream.h>

class oper
{
public:
	void operator - ()
	{
	cout<<"Called";
	}

};

int main()
{
clrscr();
  oper ob;
  -ob;
   getch();
}
