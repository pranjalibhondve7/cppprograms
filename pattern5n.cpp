

#include <conio.h>
#include<iostream.h>
int main() 
{
   int i, j, num;
   cout<<"Enter the number of rows: ";
  cin>>num;
   for (i=1; i <=num;i++) 
   {
      for (j =1; j <=i;j++) 
      {
         cout<<"*";
         
      }
      cout<<endl;
   }
       for (i=1; i <=num;i++) 
   {
      for (j =(num-1); j >=i;j--) 
      {
         cout<<"*";
         
      }
      cout<<endl;
   getch();
}
}