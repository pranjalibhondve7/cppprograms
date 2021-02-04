#include<iostream>
using namespace std;
//function defined with default arguments
int sum(int x, int y, int z=0, int w=0)
{
   return (x + y + z + w);
}
int main(){
   cout <<"sum of two no is :" <<sum(10, 15) << endl;
   cout << "sum of three no is: "<<sum(10, 15, 25) << endl;
   cout << "sun of four no is: "<<sum(10, 15, 25, 30) << endl;
   return 0;
}