// hierarchial inheritance
#include <iostream> 
using namespace std;

class A //single base class
{
    public:
 	int x, y;
 	void setdata()
 	{
   	    cout << "\nEnter value of x :\n"; 
		   cin >> x ;
		cout << "\nEnter value of y :\n"; 
		   cin >> y ;
 	}
};
class B : public A 
{
    public:
 	void mul()
 	{
 	    cout << "\n Multiplication = " << x * y;
 	}
};
class C : public A 
{
    public:
 	void add()
 	{
        cout << "\nSum = " << x + y;
 	}
};
int main()
{
    B obj1;          //object of derived class B
    C obj2;          //object of derived class C
    obj1.setdata();
    obj1.mul();
    obj2.setdata();
    obj2.add();
    return 0;
}  //end of program


