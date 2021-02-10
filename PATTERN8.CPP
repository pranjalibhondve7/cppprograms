/* 55555
   44444
   33333
   22222
   11111 */
#include<iostream.h>
#include<conio.h>
void main()
{
int r,c,i,j,num;
clrscr();
cout<<"Enter no of rows :" ;
cin>>i;
cout<<"Enter no of column :" ;
cin>>j;
//int line=5;
//int numcount=5;
 num=5;
for(r=1;r<=i;r++)
{

 for(c=1;c<=j;c++)
 {
  cout<<num;
 }
 cout<<endl;
 num--;

 }
getch();
}
