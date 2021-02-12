/**
  **
  ***
  ****
  ***
  **
  *       */

#include<conio.h>
#include<iostream.h>
void main()
{
 int r,c,num;
 clrscr();
 cout<<"Enter row no:" ;
 cin>>num;
 for(r=1;r<=5;r++) {
 for(c=1;c<=r;c++)
 {
 cout<<"*" ;
 }
 cout<<endl;
 }
 for(r=1;r<=5;r++) {
 for(c=(num-1);c>=r;c--)
 {
 cout<<"*" ;
 }
 cout<<endl;
 }
 getch();
 }