#include<iostream>
using namespace std;

int main()
{
     int s=n*2-1,i,j,p,n;
    cout<<"Enter the row size:";
    cin>>n;
   
    for(i=n;i>=1;i--)
     {
         for(j=n-1;j>=i;j--)
             cout<<" ";
            for(p=1;p<=s;p++)
                cout<<"*";
            s=s-2;
            cout<<"\n";
     }
}