#include<conio.h>
#include<iostream>
using namespace std;

inline int vcube(int a)
{
	int v=a*a*a;
	return (v);
}
int main()
{
	clrscr();
//	int a=3;
	cout<<"The volume of cube is  "<<vcube (3)<<endl;
	return 0;
}