// Constuctor Example
#include<iostream>
 
 using namespace std;
 
class MyClass {    
  public:           
  int a;
    MyClass() {     // Constructor
    cout<<"Enter no"<<endl;
    cin>>a;
     // cout << "Hello World!";
    }
    void display()
    {
    	
    	cout<< "value of a is : "<<a<<endl;
    }
};

int main() {
  MyClass obj,obj1,obj2;    
  obj.display();
  obj1.display();
  obj2.display();
  
  return 0;
}