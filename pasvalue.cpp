#include <iostream>
#include<conio.h>

using namespace std;

class one{
	
     int a;
     int b;

public:
void set(int x,int y);
void add(one cob2);
void display();

};

void one::set(int x,int y){
	a=x;
	b=y;
	//cout<<"value of  a is :" <<a<<endl;
	//cout<<"value of  b is :" <<b<<endl;
	

}

void one::add(one cob2)
{
	cob2.a=12;
	cob2.b=13;
/*	int r=a+cob2.a;
	int s=b+cob2.b;*/

//return (cob);
//cout<<"Addition of object one :" <<a<<endl;
//cout<<"Addition of object two:" <<b<<endl;

}

 void one::display(){

cout<<"value of a is:" <<a<< endl;
cout<<"value of b is:" <<b<< endl;

}

//int one::a;

int main()
{
	clrscr();
one obj1, obj2;

obj1.set(2,3);
//obj2.set(4,5);


obj1.add(obj1);
obj1.display();

return 0;
}