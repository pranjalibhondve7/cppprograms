

#include <conio.h>
#include<iostream.h>
int main() 
{
   int i, j, num;
   cout<<"Enter the number of rows: ";
  cin>>num;
   for (i=1; i <=num;i++) 
   {
      for (j =1; j <=num;j++) 
      {
         if(i==1||i==num||j==i)
         cout<<"*";
         else
         cout<<" ";
         
      }
      cout<<endl;
   }
      
   getch();
}
