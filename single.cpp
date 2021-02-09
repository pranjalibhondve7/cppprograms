#include<conio.h>
#include<iostream>
using namespace std;

 class student
 {
 	public:
 		int rno;
 		char name[20];
 		
 		
 		void getdata()
 		{
 			cout<<"Enter roll no:" ;
 			cin>>rno;
 			cout<<"Enter name : ";
 			cin>>name;
 			
		 }
 };
 
 class marks:public student
 {
 	int m1,m2,m3,total;
 	public:
 		void getmark()
 		{
 			cout<<"Enter 3 marks :"<<endl;
 			cin>>m1>>m2>>m3;
 			
		 }
		 void display()
		 {
		 	cout<<"-----Student Details---------"<<endl;
		 	cout<<"\n"<<"\n Roll no :"<<rno<<"\n"<<"Name :"<<name<<"\n"<<"Total marks :"<<m1+m2+m3<<"\n";
		 	
		 }
 };
 
 	int main()
 	{
 		marks m;
 		//clrscr();
 		m.getdata();
 		m.getmark();
 		m.display();
 		getch();
 		
	 }
