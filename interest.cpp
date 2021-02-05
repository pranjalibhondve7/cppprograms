#include<conio.h>
#include<stdio.h>
#include<iostream.h>
class simple_interest{
	public:
float prin,rate;
int time;
      void si(float prin=4000,int time=8,float rate=0.07)
     {
     	cout<<"principle amt :"<<prin<<endl;
     	cout<<"time :"<<time<<endl;
     	cout<<"rate of interest :"<<rate<<endl;
 	cout<<"simple  interest :"<<0.01*prin*rate*time<<endl;
     }
     
}s;

int main()
{
clrscr();
s.si(5000,6);
s.si(7000,6,8);
	getch();
	return 0;
}