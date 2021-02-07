// Copy Constuctor Example
#include<iostream>
#include<conio.h>
#include<string.h>
 
 using namespace std;
class one
{  
   public:  
    int x;  
    one(int a)            // parameterized constructor.  
    {  
      x=a;  
      cout<<"value of  x is :"<<x<<endl;
    }  
    one(one &i)               // copy constructor  
    {  
        x = i.x;  
        cout<<"After value of x is:"<<x<<endl;
    }  
};  
int main()  
{  
  one a1(20);               // Calling the parameterized constructor.  
 one a2(a1);                //  Calling the copy constructor.  
 cout<<"coping  of value a2  is :"<<a2.x;  
  return 0;  
}  