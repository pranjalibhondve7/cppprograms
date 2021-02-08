//WAP to find length of string using dynamic constructor
#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<string.h>

class student
{
	public:
	char *name;
	int len;
       //	int n;


   student()
 {
	len=0;
	name=new char[len];
       //	strcpy(name,n);

  }
  student(char n[])
  {
	len=strlen(n);
	name=new char[len+1];
	strcpy(name,n);
  }

 void display()
 {

 cout<<"Name is:"<<name<<endl<<" length is: "<<len<<endl;
}

 ~student()
 {
 cout<<"delete name" ;
 }
};

    void main()
    {
    clrscr();
    student s1("ramesh"),s2;
   // student s1("ram");
    s1.display();
    getch();
    }