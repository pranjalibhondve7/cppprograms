#include<conio.h>
#include<iostream.h>

class binarydemo
{
	public :
	string a,b;
	
	void set(string x,string y ){
		a=x;
		b=y;
	}
	void operator +(binarydemo cob2)
	{
		string c=a+cob2.a;
		string d=b+cob2.b;
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
 	ob1.set("Ram","Sonu");
 	//ob1.display();
 	ob2.set("Shyam","Monu");
 	ob1.display();
 	ob2.display();
 	ob1+ob2;
 	getch();
 }