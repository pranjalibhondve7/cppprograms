#include <iostream>

using namespace std;

class one{
	
    static int a;
     int n;

public:

void set(){

n = a++;
}

void show(){

cout<<"value of n = "<<n<<endl;
}

static void display(){

cout<<"value of a  = "<<a<<endl;
}


};

int one::a;

int main()
{
one obj1, obj2;

obj1.set();
obj2.set();

obj1.show();
obj2.show();

one::display();

return 0;
}