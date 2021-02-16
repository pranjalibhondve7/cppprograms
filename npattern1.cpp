#include<conio.h>
#include<iostream>
using namespace std;

int main()
{
	int i,j,n,k;
	cout<<"Enter the no. of rows : ";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		for(j=n-1;j>=i;j--)
		{
           cout<<" ";
       }
		for(k=1;k<=i;k++)
		{
	        cout<<"*";
	    }
	    cout<<endl;
	}
	
return 0;
}

