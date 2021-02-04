
#include <iostream>    
#include<conio.h>
using namespace std;    

 int add(int a,int b){      
        return a + b;      
    }      
     int add(int a, int b, int c)      
    {      
        return a + b + c;      
    }      
   
int main(void) {    
        clrscr()   ;                                        
    cout<<add(10, 20)<<endl;      
    cout<<add(12, 20, 23);     
   return 0;    
}    