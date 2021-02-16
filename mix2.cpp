#include <conio.h>
#include<iostream.h>
int main() 
{
   int i, j, n;
 char ch ='A';
  //cout<<"Enter the number of rows: ";
  //cin>>n;
  
   for (i=1; i <=5;i++) 
   {
     // cout<<i;
      for (j =1; j <=5;j++)
                {
                  if(i==1||j==1||i==5||j==5)
                  {
                  cout<<"*";
                  }
                  else
                  {
                  cout<<ch++;
                  }
                }
              cout<<endl;
   }
   getch();
   return 0;
}