/*1
    12
    123
    1234*/
#include<conio.h>
#include<iostream>
using namespace std;

int main()
{
	int r,c,num;
	//clrscr();

	cout<<"Enter the no of rows : ";
	cin>>num;

	for(r=num;r>=1;r--)
	{
		for(c=1;c<=r;c++)
		{

			cout<<"*";
		}

		cout<<endl;
	}
	getch();
}
