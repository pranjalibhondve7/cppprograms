#include<conio.h>
#include<iostream>
using namespace std;

int main()
{
	int r,c,num;
	//clrscr();
	
	cout<<"Enter the no of rows : ";
	cin>>num;
	
	for(r=1;r<=num;r++)
	{
		for(c=1;c<=r;c++)
		{
			cout<<"*";
		}
		
		cout<<endl;
	}
	getch();
}
