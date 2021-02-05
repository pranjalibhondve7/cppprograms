#include<conio.h>
#include<stdio.h>
#include<iostream.h>
class student{
	public:
	string name;
	int rollno;
	 
	 void show(void)
	 {
	 	cout<<"enter name : "<<endl;
	 	cin>>name;
	 }
	 void roll()
	 {
	 	cout<<"enter roll no : "<<endl;
	      cin>>rollno;
	 }
};
int main()
{
	clrscr();
	student s1;
	s1.show();
	s1.roll();
	//cout<<"   "<<endl;
	return 0;
	getch();
}