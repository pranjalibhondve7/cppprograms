#include<conio.h>
#include<iostream.h>
#include<string.h>

class binarydemo
{
	public :
	char name[100];

	void set(char n[ ] ){
	strcpy(name,n);
	}
	void add(binarydemo ob1,binarydemo ob2)
	{
		//string c=a+cob2.a;
	//	string d=b+cob2.b;
	strcpy(name,ob1.name);
	strcat(name,ob2.name);
	//	cout<<c<<"    "<<d<<endl;
	}
	void display (){
		cout<<"name is :" <<name<<endl;
	//	cout<<"b is :"<<b<<endl;
	}
};
 int main ()
 {
 	clrscr();
 	binarydemo ob1,ob2,ob3;
 	ob1.set("Ram");
 	//ob1.display();
 	ob2.set("Shyam");
 //	ob1.display();
 //	ob2.display();
 //	ob3=ob1+ob2;
      ob3.add(ob1,ob2);
      ob3.display();
 	getch();
 } 