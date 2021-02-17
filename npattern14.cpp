#include <conio.h>
#include<iostream.h>
int main() 
{
   int n,k;
   char i, j;
   char ch='A';
   cout<<"Enter the number of rows: ";
   cin>>n;
   for (i=1; i <=n;i++) 
   {
     for(k=n-1;k>=i;k--)
      cout<<" ";
      for (j =1; j <=i;j++) 
      {
         cout<<ch<<" ";
         //ch++;
      }
     ch=ch+2;
     cout<<endl;
   }
   getch();
}
