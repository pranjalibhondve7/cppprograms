#include <conio.h>
#include<iostream.h>
int main() 
{
   int i, j;
   char ch1='A';
   char ch2='a';
  // cout<<"Enter the number of rows: ";
  // cin>>num;
   for (i =1; i <=3;i++) 
   {
      cout<<ch1;
      for (j =1; j <=4;j++) 
      {
         cout<<ch2;
         
      }
      
      cout<<endl;
      ch1++;
      ch2++;
   }
   getch();
}