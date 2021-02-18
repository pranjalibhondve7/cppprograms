#include <iostream>
using namespace std;
int main()
{
  int i,j,k,n;
  cout<<"Enter the row size:";
  
  int p=1;
  cin>>n;
  
  for(i=1;i<=n;i++)
       {
       for(k=n-1;k>=i;k--)
       {
            cout<<" ";
       }
       for(j=p;j>=1;j--)
       {
           cout<<j;
       }
       p+=2;
       cout<<endl;
       }
}
