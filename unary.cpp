#include<conio.h>
#include<iostream.h>

class unarydemo
{
	public :
	int a,b;
	
	void set(int x,int y){
	a=x;
	b=y;	
	
	}
	void operator -()
	{
		a=-a;
		b=-b;
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
 	ob.set(-4,7);
 	-ob;
 	ob.display();
 //	ob2.set();
// 	+ob2;
 	//ob1.display;
 	//ob2.display();
 	//ob3=ob1+ob2;
 	getch();
 }