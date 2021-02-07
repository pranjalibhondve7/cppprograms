// Parameterise Constuctor Example
#include<iostream>
#include<conio.h>
 
 using namespace std;

class cube
{
    public:
    int side;
    cube(int x)
    {
        side=x;
        cout<<"value of x is"<<x<<endl;
    }
    int display(int x)
    {
    	cout <<"side is :"<<side<<endl;
 
    }
    	
};

int main()
{ 
clrscr();
    cube c1(10);
    cube c2(20);
    cube c3(30);
    
   c1.display(10);
   /* c2.display(130);
    c3.display(50);*/
  
}