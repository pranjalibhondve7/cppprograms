#include<iostream>
#include<conio.h>
using namespace std;

class student     //Base Class
{
    public:
    	int rno;
    	char name[10];
        int subjects[3], i;
    public:
        void accept_details()
        {
        		cout<<"\n Enter roll no : ";
        		cin>>rno;
        		cout<<"\n Enter student Name : ";
        		cin>>name;
        }
        void accept_marks()
        {
		
        		cout<<"\n ------------------------------- \n";
        		cout<<"\n Enter Marks for Three Subjects ";
                cout<<"\n ------------------------------- \n";
                cout<<"\n English : ";
                cin>>subjects[0];
                cout<<"\n Maths : ";
                cin>>subjects[1];
                cout<<"\n History : ";
                cin>>subjects[2];
        }
};

class Total : public student  
{
   public:
        int total;
    public:
        void totalsub()
        {
                total = subjects[0] + subjects[1] + subjects[2];
        }
};
class Percentage : public Total       
{
    public:
        float per;
    public:
        void calculate_percentage()
        {
                per=total/3;
        }
        void show_result()
        {
                cout<<"\n ------------------------------- \n";
                cout<<"\n Percentage of a Student : "<<per;
        }
};
int main()
{
        Percentage p;
        p.accept_details();
        p.accept_marks();
        p.totalsub();
        p.calculate_percentage();
        p.show_result();
        getch();
        return 0;
}
