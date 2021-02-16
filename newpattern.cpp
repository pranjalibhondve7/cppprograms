#include <conio.h>
#include<iostream.h>
int main() 
{
   int i, j, n,k;
  // cout<<"Enter the number of rows: ";
  // cin>>n;
   for (i=1; i <=5;i++) 
   {
      for(k= 1;k<=i;k++)
      cout<<" ";
      for (j =5; j >=i;j--) 
      {
         cout<<j;
         
      }
     
      cout<<endl;
   getch();
}
}