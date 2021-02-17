#include <conio.h>
#include<iostream.h>
int main() 
{
   int n,k;
   char i, j;
   char ch='E';
   cout<<"Enter the number of rows: ";
   cin>>n;
   for (i=5; i >=1;i--) 
   {
     for(k=4;k>=i;k--)
      cout<<" ";
      for (j =1; j <=i;j++) 
      {
         cout<<ch;
      }
      ch--;
     cout<<endl;
   getch();
}
}