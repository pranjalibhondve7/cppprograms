
/*EEEEE
    DDDDD
    CCCCC
    BBBBB
    AAAAA*/

#include <conio.h>
#include<iostream.h>
int main() 
{
   char i, j;
  char  num='E';
  // cout<<"Enter the number of rows: ";
  // cin>>num;
   for (i ='A'; i <='E';i++) 
   {
      for (j ='E'; j >= 'A';j--) 
      {
         cout<<num;
         
      }
      cout<<endl;
      num--;
   }
   getch();
}