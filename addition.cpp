
#include <iostream>  
using namespace std;  


class two;          // forward declarartion.  
class one  
{  
    int a;  
    public:  
    void set(int i)  
    {  
        a=i;  
    }  
    friend void add(one,two);    // friend function.  
};  

class two 
{  
    int b;  
    public:  
    void set(int i)  
    {  
        b=i;  
    }  
    friend void add(one,two);                    // friend function  
};  

void add(one x,two y)  
{  
   /* if(x.a<=y.b)  
    std::cout << x.a<< std::endl;  
    else  
    std::cout << y.b<< std::endl;  */
    int c=x.a+y.b;
    std::cout<<"The sum of two no. is : "<<c<<std::endl;
    
}  

   int main()  
{  
   one a;  
   two b;  
   a.set(10);  
   b.set(20);  
   add(a,b);  
    return 0;  
 }  