

#include <conio.h>
#include<iostream.h>
int main() 
{
   int i, j, num,k,m=1;
   cout<<"Enter the number of rows: ";
  cin>>num;
 /*  for (i=1; i <=num;i++) 
   {
     
      for (j =1; j <=num;j++) 
      {
         cout<<" ";
      }
      num--;
         for ( k=1;k<=i;k++)
         {
              cout<<"* " ;
         }
         cout<<endl;
   }*/
   for (i=1; i <=num;i++) 
   {
     cout<<" ";
      for (j =1; j <=m;j++) 
      {
         cout<<" ";
      }
      m++;
         for ( k=num;k>=i;k--)
         {
              cout<<" *" ;
         }
         cout<<endl;
   }
      
   getch();
}
