#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<iostream>
#include<fstream>
using namespace std;

class project
{
 public:
    //char user[10]="pranjali";
	//char password[10]="123";
    char un[10],pas[10],quest [5][100];
	char option1 [3][20],option2 [3][20],
    option3 [3][50],option4 [3][50],option5 [3][50];
    int ch,x,y,response[5], correct_ans[5], option,i, marks, options;
	string fname,lname,name,last,email,user,password;
	
    void username();
    void question();
 	
};

 void project::username()
 { 
 
 		  cout<<"************** Welcome To Login Page ******************"<<endl<<endl;
 			char user[10]="pranjali";
	        char password[10]="123";
		 	//usern:
			cout<<endl<<"Enter Username : ";
			cin>>un;
			
			cout<<"Enter Password : ";
			int c=0;
			for(; ch!='\r';)
			{
			ch=getch();
			pas[c]=ch;
			c++;
			cout<<"*";
			}
			c=c-1;
			pas[c]='\0';
			//cout<<pas;
			x=strcmp(un,user);
			y=strcmp(password,pas);
			if((x==0)&&(y==0))
				{
			    cout<<endl<<"  Login Successfull!!   " <<endl ;
			    system("cls");
				question();
				//
				system("cls");
				getch();
				}
				else
				{
			     	cout<<endl<<" Incorrect Username and Password.Please Try Again ......"<<endl;
			     	//goto usern;
			     	exit(0); 
				}
   }
   
      
void project::question()
{
	system("cls");
	cout<<"-----------------ALL THE BEST------------------"<<endl<<endl;
		
	strcpy(quest[0],"Q.1 Who is father of C language?");
	strcpy(option1 [0],"\n 1. Bjarne Stroustrup");
	strcpy(option1 [1],"\n 2. James Gosling");
	strcpy(option1 [2],"\n 3. Dennis Ritchie");
	correct_ans[0]=2;
	system("cls");
	
	strcpy(quest[1],"Q.2 C Language developed in ____");
	strcpy(option2 [0],"\n 1. in 1972");
	strcpy(option2 [1],"\n 2. in 1973");
	strcpy(option2 [2],"\n 3. in 1971 ");
	correct_ans[1]=0;
	system("cls");
	
	strcpy(quest[2],"Q.3 C was primarily developed as");
	strcpy(option3[0],"\n 1. System Programming Language");
	strcpy(option3[1],"\n 2. General Purpose Language");
	strcpy(option3[2],"\n 3. Data processing Language ");
	correct_ans[2]=0;
	system("cls");
	
	strcpy(quest[3],"Q.4 C program are converted into machine language with the help of");
	strcpy(option4 [0],"\n 1. An Editor");
	strcpy(option4 [1],"\n 2. An compiler");
	strcpy(option4 [2],"\n 3. An Operating system");
	correct_ans[3]=1;
	system("cls");
	
	strcpy(quest[4],"Q.5 Standard ANSI C recognizes ____ number of keywords?");
	strcpy(option5 [0],"\n 1. 30");
	strcpy(option5 [1],"\n 2. 31");
	strcpy(option5 [2],"\n 3. 32");
	correct_ans[4]=2;
	system("cls");
	
	do {  
    cout<<"\n\n\n\n ---------QUIZ PROGRAM-------------"; 
    cout<<"\n-----------------------------------";  
    cout<<"\n 1. Display Questions";  
    cout<<"\n 2. Display Correct Answers";  
    cout<<"\n 3. Display Result";  
    cout<<"\n 4. EXIT";  
    cout<<"\n ----------------------------------";  
    cout<<"\n\n\n Enter your option: ";  
    cin>>option;
    system("cls");
	 
    
    switch(option)
    {
    	case 1:
    		{
    			cout<<endl<<"************* ALL THE BEST ****************"<<endl<<endl;
    			cout << "Enter your first name : ";
	      		cin >> fname;
				cout <<endl<<
				"Enter your last name : ";
				cin >> lname;
				cout<<endl<<"************* QUESTIONS ****************"<<endl<<endl;
    			
    			cout<<quest[0]<<endl;
    			for(i=0;i<=2;i++)
				{
    			cout<<option1[i];
    			i+=1;
			    }
			    cout<<"\n Enter your answer :";
			    cin>>response[0];
			    system("cls");
			    
			    cout<<endl<<"************* ALL THE BEST ****************"<<endl<<endl;
			    cout<<"Name : "<<fname<<endl;
			    cout<<"Last Name :"<<lname<<endl;
			    cout<<endl<<"************* QUESTIONS ****************"<<endl<<endl;
			    cout<<quest[1]<<endl;
    			for(i=0;i<=2;i++)
				{
    			cout<<option2[i];
    			//i+=1;
			    }
			    cout<<"\n Enter your answer :";
			    cin>>response[1];
			    system("cls");
			    
			    cout<<endl<<"************* ALL THE BEST ****************"<<endl<<endl;
			    cout<<"Name : "<<fname<<endl;
			    cout<<"Last Name :"<<lname<<endl;
			    cout<<endl<<"************* QUESTIONS ****************"<<endl<<endl;
			    cout<<quest[2]<<endl;
			    for(i=0;i<=2;i++)
				{
    			cout<<option3[i];
    			//i+=1;
			    }
    			cout<<"\n Enter your answer :";
			    cin>>response[2];
			    system("cls");
			    
			    cout<<endl<<"************* ALL THE BEST ****************"<<endl<<endl;
			    cout<<"Name : "<<fname<<endl;
			    cout<<"Last Name :"<<lname<<endl;
			    cout<<endl<<"************* QUESTIONS ****************"<<endl<<endl;
			    cout<<quest[3]<<endl;
    			for(i=0;i<=2;i++)
				{
    			cout<<option4[i];
    		   	//i+=1;
			    }
			    cout<<"\n Enter your answer :";
			    cin>>response[3];
			    system("cls");
			    
			    cout<<endl<<"************* ALL THE BEST ****************"<<endl<<endl;
			    cout<<"Name : "<<fname<<endl;
			    cout<<"Last Name :"<<lname<<endl;
			    cout<<endl<<"************* QUESTIONS ****************"<<endl<<endl;
			    cout<<quest[4]<<endl;
    			for(i=0;i<=2;i++)
				{
    			cout<<option5[i];
    			//i+=1;
			    }
			    cout<<"\n Enter your answer :";
			    cin>>response[4];
			    system("cls"); 
	        }
	             break;
		case 2:
			{
				cout<<"\n\n************* CHECK THE CORRECT ANSWERS ***************";   
	            cout<<"\n --------------------------------------------------------"<<endl;   
	            cout<<quest[0]<<endl<<option1[correct_ans[0]]<<endl<<endl;   
	            cout<<quest[1]<<endl<<option2[correct_ans[1]]<<endl<<endl;   
			    cout<<quest[2]<<endl<<option3[correct_ans[2]]<<endl<<endl;   
		        cout<<quest[3]<<endl<<option4[correct_ans[3]]<<endl<<endl;   
		        cout<<quest[4]<<endl<<option5[correct_ans[4]]<<endl<<endl;   
		           //system("cls");   
	             
			}
			break;
		case 3:
			{ 
				cout<<"***************** RESULT *********************";
				marks = 0;  
                for(i = 0;i <= 5;i++) {   
                if(correct_ans[i]+1==response[i])  
				{   
                marks++;   
                  }  
                }   
                
           		cout<<endl<<"Out of 5 your score is "<<marks<<endl;
           		cout<<endl<<endl<<"**************************************";
	        } 
           break;  
   }
}
        while(option!=4);
         getch();
}
int main()
{
	project p;
	p.username();
	p.question();
    //return 0;
	getch();

}

