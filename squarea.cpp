#include<conio.h>
#include<stdio.h>
#include<iostream.h>


class square
{
	public :
	float a ,A;
	
	int area(float a)
	{
	//	float b=25,h=8;
		A=a*a;
		
		cout<<"Area of square: "<<A<<endl;
	}
}s;

int main()
{
	clrscr();
	float z=s.area(8);
	
	return (z);
	getch();
}
	
