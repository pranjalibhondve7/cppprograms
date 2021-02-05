#include<conio.h>
#include<stdio.h>
#include<iostream.h>


class X
{
    public:
    static int i;
    X()
    {
        //construtor
    };
};

int X::i=1;

int main()
{
    X obj;
    cout << obj.i;   // prints value of i
}