/* 11111
     2222
     333
     44
     5         */
#include <conio.h>
#include<iostream.h>
int main() 
{
   int i, j, num;
   cout<<"Enter the number of rows: ";
   cin>>num;
   for (i =1; i <=num; i++) 
   {
      for (j =num; j >= i;j--) 
      {
         cout<<i;
         
      }
      cout<<endl;
   }
   getch();
}