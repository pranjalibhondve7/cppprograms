#include<conio.h>
#include<stdio.h>
#include<iostream.h>


class swap 
{
	public :
	int a,b,temp;
	
	void swapping(int &a,int &b)
	{
		
temp=a;
a=b;
b=temp;
		
		cout<<"After swapping a= : "<<a<<endl;
		cout<<"After swapping b= : "<<b<<endl;
	}
}s;

int main()
{
	clrscr();
	int a=4 , b=10;
	cout<<"Before swapping a= : "<<a<<endl;
	cout<<"Before swapping b= : "<<b<<endl;
	
	s.swapping(a,b);
//	std::cout<<"Before swapping : "<<a<<endl;
	
	return 0;
	getch();
}
	
