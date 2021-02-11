/* 12345
     1234
     123
     12
     1         */
#include <conio.h>
#include<iostream.h>
int main() 
{
   int i, j, num;
   cout<<"Enter the number of rows: ";
   cin>>num;
   for (i =num; i >=1; i--) 
   {
      for (j =1; j <= i;j++) 
      {
         cout<<j;
      }
      cout<<endl;
   }
   getch();
}