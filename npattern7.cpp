#include <conio.h>
#include<iostream.h>
int main() 
{
   int i, j, n,k;
   cout<<"Enter the number of rows: ";
   cin>>n;
   for (i=n; i >=1;i--) 
   {
     for(k=n-1;k>=i;k--)
      cout<<" ";
      for (j =1; j <=i;j++) 
      {
         cout<<j;
         
      }
       
     
      cout<<endl;
   getch();
}
}