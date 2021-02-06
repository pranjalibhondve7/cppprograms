
/* wap to print sum of n nos using function overloading*/

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
int sum( int a,int b);
int sum( int a,int b,int c);
int sum( int a,int b,int c,int d);
int sum( int a,int b,int c,int d,int e);
int sum( int a,int b,int c,int d,int e,int f);

int sum( int a,int b)
{
	return a+b;
}
int sum( int a,int b,int c)
{
	return a+b+c;
}
int sum( int a,int b,int c,int d)
{
	return a+b+c+d;
}
int sum( int a,int b,int c,int d,int e)
{
	return a+b+c+d+e;
}
int sum( int a,int b,int c,int d,int e,int f)
{
	return a+b+c+d+e+f;
}
int result1,result2,result3,result4,result5;




int main()
{
	int n,a[50];
	char ch= 'y';
	int count =0;
	
	clrscr();
	while(ch=='y'||ch=='Y')
	{
		cout<< "Enter the no: "<<endl;
				cin>>n;
	//	for (i=0;i<=count-1;i++)
		
		cout<<"Press Y to continue : "<<endl;
		cin>>ch;
		a[count]=n;
		count++;
	}
			for (int i=0;i<=count-1;i++)		
	{
	cout<<"Entered no is: "<<"  "<<a[i]<<endl;
	}

cout<<"\n The count is :"<<"     "<<count<<endl;
		
	switch (count )
	{
	case 2: 
                 result1=sum(a[0],a[1]);
	             cout<<"Sum of no is:"<<" "<<result1<<endl;
	          	break;
		
	case 3: 
                result2=sum(a[0],a[1],a[2]);
				 		//cout<<t<<endl;
	            cout<<"Sum of no is"<<" "<<result2<<endl;
             	break;		
				
	case 4: 
	            result3=sum(a[0],a[1],a[2],a[3]);
				 	//	cout<<u<<endl;
	            cout<<"sum of no is"<<" "<<result3<<endl;
		         break;
	
	case 5: 
	             result4=sum(a[0],a[1],a[2],a[3],										a[4]);
				 		//cout<<v<<endl;	      
	              cout<<"sum of  no is"<<" "<<result4<<endl;
	          	break;					
	}									
	getch();
}
	

	
	