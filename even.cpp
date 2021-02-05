#include<conio.h>
#include<stdio.h>
#include<iostream.h>


class even_odd
{
	public :
	int num;
	
	int even(int num)
	{
		if(num%2==0){
		cout<<"number is even"<<num<<endl;
		}
		else{
		cout<<"odd no"<<num<<endl;
		}
	}
}e;

int main()
{
	int num;
	clrscr();
	
//	cout<<"Enter a number : "<<endl;
//	cin>>num;
	e.even(5);
	
	return 0;
	getch();
}