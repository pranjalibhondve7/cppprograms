/* Program to find out the student details using multiple inheritance in C++*/

#include<iostream>
#include<conio.h>
using namespace std;

class student
{
public:
	int rno,m1,m2;
	char name[10];

	void get()
{
	cout<<"Enter the Roll no :";
	cin>>rno;
	cout<<"Enter the Name :";
	cin>>name;
	cout<<"Enter the two marks :";
	cin>>m1>>m2;
}
};

class sports
{
public:
int sm; // sm = Sports mark

void getsm()
{
	cout<<"\nEnter the sports mark :";
			cin>>sm;

}
};
class statement:public student,public sports
{
public:
    int tot,avg;
	
void display()
{
	tot=(m1+m2+sm);
	avg=tot/3;
	cout<<"\n\n\tRoll No : "<<rno<<"\t Name is : "<<name<<"\n\tTotal : "<<tot;
	cout<<"\n\tAverage : "<<avg;
}
};
int main()
{
//clrscr();
statement obj;
obj.get();
obj.getsm();
obj.display();
getch();
}
