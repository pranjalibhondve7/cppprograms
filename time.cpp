
/*C++ program to add two times.*/
#include <iostream>
using namespace std;
 
class Time
{

    int hours;
    int minutes;
    int seconds;
 
public:
    void getTime(void);
    void display(void);
    void addition(Time T1,Time T2);
};
 
void Time::getTime(void)
{
    cout << "Enter time:" << endl;
    cout << "Hours: ";   
     cin>>hours;
    cout << "Minutes:";  
    cin>>minutes;
    cout << "Seconds: "; 
     cin>>seconds;
}
 
void Time::display(void)
{
    cout << endl;
    cout << "Time after add: ";
    cout << hours << ":" << minutes << ":" << seconds << endl;
}
 
void Time::addition(Time T1,Time T2)
{
    //  minutes= minutes %60;
//   seconds= seconds %60;
    seconds=T1.seconds+T2.seconds;
    minutes=T1.minutes+T2.minutes + (seconds/60);
    hours= T1.hours+T2.hours + (minutes/60);
  minutes= minutes %60;
   seconds= seconds %60;
}
 
 
int main()
{
    Time T1,T2;
    T1.getTime();
    T2.getTime();
    //add two times
    T1.addition(T1,T2);
    T1.display();
     
    return 0;
}