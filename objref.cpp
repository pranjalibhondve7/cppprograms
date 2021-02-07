#include <iostream>
#include<conio.h>

using namespace std;

class one{
	
     int a;
     int b;

public:
void set(int x,int y);
int add(one &cobj2);
void display();

};

void one::set(int x,int y){
	a=x;
	b=y;
	//cout<<"value of  a is :" <<a<<endl;
	//cout<<"value of  b is :" <<b<<endl;
	

}

int  one::add(one &cobj2)
{
   cobj2.a=12;
   cobj2.b=13;

//return (cob);
cout<<"The value of object one :" <<cobj2.a<<endl;
cout<<" The value of object two:" <<cobj2.b<<endl;

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
obj1.display();

obj1.add(obj2);

return 0;
}