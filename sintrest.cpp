#include<iostream>
using namespace std;
void si(float prin=5000,int time=8,float rate=0.07)
{
    cout<<"Principal amount : "<<prin<<endl;
    cout<<"Rate of intrest: "<<rate<<endl;
    cout<<"Time : "<<time<<endl;
    cout<<"Total simple interest is : "<<0.01*prin*rate*time<<endl;
}
int main()
{
    //si();
  //si(8000);
   si(9000,8);
    si(9000,8);
    return 0;
}
