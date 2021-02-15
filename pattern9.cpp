

#include <conio.h>
#include<iostream.h>
int main() 
{
   int i, j, num,k;
   cout<<"Enter the number of rows: ";
  cin>>num;
   for (i=1; i <=num;i++) 
   {
      for(k=5;k>=i;k--)
      cout<<" ";
      for (j =1; j <=i;j++) 
      {
         cout<<j<<" ";
        }
      cout<<endl;
   }
      
   getch();
}
