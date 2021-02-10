#include<conio.h>
#include<iostream.h>

class binarydemo
{
	public :
	int a,b;
	
	void set(int x,int y ){
		a=x;
		b=y;
	}
	void operator +(binarydemo cob2)
	{
		int c=a+cob2.a;
		int d=b+cob2.b;
		cout<<c<<"    "<<d<<endl;
	}
	void display (){
		cout<<"a is :" <<a<<endl;
		cout<<"b is :"<<b<<endl;
	}
};
 int main ()
 {
 	clrscr();
 	binarydemo ob1,ob2;
 	ob1.set(2,3);
 	//ob1.display();
 	ob2.set(8,7);
 	ob2.display();
 	ob1.display();
 	ob1+ob2;
 	getch();
 }