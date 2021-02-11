/*A
    AB
    ABC
    ABCD */

#include<conio.h>
#include<iostream>
using namespace std;

int main()
{
	int r,c,num;
	//clrscr();
	char ch='A';

	//cout<<"Enter the no of rows : ";
//	cin>>num;

	for(r=1;r<=5;r++)
	{
		for(c=1;c<=r;c++)
		{

			cout<<ch;
			ch++;
		}

		cout<<endl;
		ch='A';
	}
	getch();
}