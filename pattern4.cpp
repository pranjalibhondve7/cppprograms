

#include <conio.h>
#include<iostream.h>
int main() 
{
   char i, j, num;
  // cout<<"Enter the number of rows: ";
  // cin>>num;
   for (i=1; i <=5;i++) 
   {
      for (j =5; j >=i;j--) 
      {
         cout<<"*";
         
      }
      cout<<endl;
   }
   for (i=1 ;i <=5;i++) 
   {
      for (j =1; j <=i;j++) 
      {
         cout<<"*";
         
      }
      cout<<endl;
   getch();
}
}