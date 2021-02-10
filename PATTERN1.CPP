/*1 2 3 4
  1 2 3 4
  1 2 3 4
  1 2 3 4 */

#include<conio.h>
#include<iostream.h>

void main()
{
int r,c,i,j;
clrscr();
cout<<"Enter no of rows :" ;
cin>>r;
cout<<"Enter no of column :" ;
cin>>c;

for(i=1;i<=r;i++)
{
 for(j=1;j<=c;j++)
 {
  cout<<j<<" ";
 }
 cout<<endl;
}
getch();
}



