#include<conio.h>
#include<iostream.h>

class one 
{
	public:
	void dis(){
		cout<<"One";
	}
};
void main()
{
	clrscr();
	one ob,*obpt;
	obpt=&ob;
	obpt->dis();// structure pointer
	getch();
}