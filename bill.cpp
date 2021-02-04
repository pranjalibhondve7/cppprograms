#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();

int n1,n2,n3,q1,q2,q3,p1,p2,p3,a1,a2,a3,ta,i;
//Input the 1st product details and save them in their respective variables
cout<<"Enter 1st product code"<<endl;
cin>>n1;
cout<<"Enter 1st product price"<<endl;
cin>>p1;
cout<<"Enter 1st product quantity"<<endl;
cin>>q1;
//draw line for neatness
cout<<"-----------------------------------"<<endl;
//Input the 2nd product details and save them in their respective variables
cout<<"Enter 2nd product code"<<endl;
cin>>n2;
cout<<"Enter 2nd product price"<<endl;
cin>>p2;
cout<<"Enter 2nd product quantity"<<endl;
cin>>q2;
//draw line for neatness
cout<<"-----------------------------------"<<endl;
//Input the 3rd product details and save them in their respective variables
cout<<"Enter 3rd product code"<<endl;
cin>>n3;
cout<<"Enter 3rd product price"<<endl;
cin>>p3;
cout<<"Enter 3rd product quantity"<<endl;
cin>>q3;
//draw line for neatness
cout<<"-----------------------------------"<<endl;
//calculate amount and total and save them in 'a1','a2'and 'a3'
a1=p1*q1;
a2=p2*q2;
a3=p3*q3;
ta=a1+a2+a3;
//show the bill
cout<<"Item \t Price \t Qty \t Amount"<<endl;
cout<<n1<<"\t"<<p1<<"\t"<<q1<<"\t"<<a1<<endl;
cout<<n2<<"\t"<<p2<<"\t"<<q2<<"\t"<<a2<<endl;
cout<<n3<<"\t"<<p3<<"\t"<<q3<<"\t"<<a3<<endl;
//Show total
cout<<"-----------------------------------"<<endl;
cout<<"Total amount = "<<ta;

getch();
}