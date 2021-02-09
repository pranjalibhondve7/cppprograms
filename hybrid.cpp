#include<iostream>
using namespace std;

class student
//base class derivation
{
  public:
    int r_no;
    char name[20];

  public:
    void setRollno()
    {
      cout << "Enter the roll number of student : ";
      cin >> r_no;
      cout << "Enter the name of student : ";
      cin >> name;
    }

    void disRollno()
    {
      cout << "\nRoll Number -: " << r_no << "\n";
      cout << "\n Name -: " << name << "\n";
    }
};

class exam : public student
//intermediate base class
{
  public:
    int paper1, paper2;

  public:
    void setMarks()
    {
      cout << "Enter the marks of student in paper 1 : ";
      cin >> paper1;
      cout << "Enter the marks of student in paper 2 : ";
      cin >> paper2;
    }

    void disMarks()
    {
      cout << "Marks Obtained : " << "\n";
	  cout << "  Paper 1 -: " << paper1; 
      cout << "\n  Paper 2 -: " << paper2 << "\n";
    }
};

class sports
{
  public:
    int spt_marks;

  public:
    void setSportsMarks()
    {
      cout << "Enter the marks in Physical Eduction : ";
      cin >> spt_marks;
    }

    void disSportsMarks()
    {
      cout << "Additional Marks : " << spt_marks << "\n \n";
    }
};

class result : public exam, public sports    //derived from test and sports
{
  int total;

  public:
    void display ()
    {
      total = paper1 + paper2 + spt_marks;
      disRollno();
      disMarks();
      disSportsMarks();
    
      cout << "Total Score : " << total ;
    }
};

int main ()
{
  result s1;
  s1.setRollno();
  s1.setMarks();
  s1.setSportsMarks();
  s1.display();

  return 0;
}

