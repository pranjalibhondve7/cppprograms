#include<conio.h>
#include<iostream.h>

class unarydemo
{
	public :
	int a,b;
	void get(){
		cout<<"Enter value of a : ";
		cin>>a;
		cout<<"Enter value of b : ";
		cin>>b;
	}
	void operator +()
	{
		++a;
	     b++;
	}
	void display (){
		cout<<"a is :" <<a<<endl;
    	cout<<"b is :"<<b<<endl;
	}
};
 void main ()
 {
 	clrscr();
 	unarydemo ob;
 	ob.get();
 
 	+ob;
 	ob.display();
 	
 	getch();
 }