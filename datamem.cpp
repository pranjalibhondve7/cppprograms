#include <iostream>

using namespace std;

class one{
int b;
static int a;

public:

void check()
{
a++;
}

void display()
{
cout<<"a = "<<a<<endl;
}

};

int one :: a;

int main()
{
one obj1, obj2, obj3;

cout<<"Initial value of a :" <<endl;

obj1.display();
obj2.display();
obj3.display();

obj1.check();
obj2.check();
obj3.check();

cout<<"Value of a after calling 2nd function : "<<endl;

obj1.display();
obj2.display();
obj3.display();


return 0;
}
