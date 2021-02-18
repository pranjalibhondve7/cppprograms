#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char ch;
     int i,x,y;

    char user[10]={"pranjali"};
    char password[10]={"123"};
    char un[10];
    char pas[10];
    char quest [5][100];
    char optionl [3][20],option2 [3][20],option3 [3][20],
    option4 [3][20],option5 [3][20];
    int response[5],correct_ans[5],option, marks;

    printf("Enter your name:");
    scanf("%s",un);
    printf("Enter your password:");
   // scanf("%s",pas);
  //ch=getch();//to holding characters
  int c=0;
  for(;ch!='\r';)
  {
    ch=getch();
    pas[c]=ch;
    c++;
    printf("*");
  }
  c=c-1;
  pas[c]='\0';
  printf("%s",pas);

  /*  for(i=0;ch!='\r';i++)
    {
	ch=getch();
	pas[i]=ch;
       printf("*");
    }*/
  // printf("%s",pas);
    x=strcmp(un,user);
    y=strcmp(password,pas);
    if((x==0)&&(y==0))
    {
	printf("\n \n login successful");
	printf("\n");
    }
	  else
      {
	printf("\n \n Incorrect Username or password");
	printf("\n");
      }


      printf("-------------------Your Test----------------------");

    strcpy(quest[0], "Q.1  Who is father of C language?");
    strcpy (optionl [0],"1.Bjarne Stroustrup");
    strcpy(optionl[1] ,"2. james Gosling ");
    strcpy(optionl[2] ,"3. Dennis Ritchie");
    correct_ans[0] = 2;
    //clrscr();

    strcpy(quest[1], "Q.2  C Language developed at _______  ?");
    strcpy(option2 [0],"1. AT & T Bell Lab of USA in 1972");
    strcpy(option2[1], "2. AT & T Bell Lab of USA in 1970");
    strcpy(option2[2],"3.  AT & T Bell Lab of USA in 1973");
    correct_ans[1]=0;

    strcpy(quest[2], "Q.3  C was primarily developed as ");
    strcpy(option2 [0],"1. System Programming Language");
    strcpy(option2[1], "2. General Purpose Language");
    strcpy(option2[2],"3.  Data processing Language");
    correct_ans[1]=0;

    strcpy(quest[3], "Q.4  C program are converted into machine language with the help of  ");
    strcpy(option2 [0],"1. An editor");
    strcpy(option2[1], "2. A compiler");
    strcpy(option2[2],"3.  An operating System");
    correct_ans[1]=1;

    strcpy(quest[4], "Q.5  Standard ANSI C recognizes ____ number of keywords?  ");
    strcpy(option2 [0],"1. 30");
    strcpy(option2[1], "2. 32");
    strcpy(option2[2],"3.  36");
    correct_ans[1]=1;

    do {
    printf("\n\n\n\n ---------QUIZ PROGRAM-------------");
    printf("\n-------------------------------------");
    printf("\n 1. Display Questions");
    printf("\n 2. Display Correct Answers");
    printf("\n 3. Display Result");
    printf("\n 4. EXIT");
    printf ("\n ----------------------------------");
    printf("\n\n\n Enter your option: ");
    scanf("%d", &option);

	switch(option)
    {
       case 1:
	      printf ("\n %s \n", quest [0]);
		for(i=0;i<3;i++)   {
		printf("\n %s", optionl[i]);
		}
		printf ("\n\n Enter your answer number: ");
		scanf("%d", &response[0]);

		printf ("\n %s \n", quest [1]);
		for (i=0;i<3;i++)   {
		printf("\n %s", option2[i]);
		   }
		printf("\n\n Enter your answer number: ");
		scanf("%d", &response[1]);


		printf("\n %s \n", quest[2]);
		for(i=0;i<3;i++)  {
		printf("\n %s", option3[i]);
		   }
		printf("\n\n Enter your answer number: ");
		scanf ("%d", &response [2]);
		printf("\n %s \n", quest[3]);
		for (i=0;i<3;i++)  {
		printf("\n %s", option4[i]);
		}
		printf("\n\n Enter your answer number: ");
		scanf ("%d", &response [3]);
		printf("\n %s \n", quest[4]);
		for (i=0;i<3;i++)  {
		printf("\n %s", option5[i]);
		}
		printf("\n\n Enter your answer number: ");
		scanf ("%d", &response [4] );
		break;



       case 2:
	       printf("\n\n CHECK THE CORRECT ANSWERS");
	       printf("\n ************************");
	       printf("\n %s \n %s",quest[0] ,optionl[correct_ans[0]]);
	       printf("\n\n %s \n%s",quest[1] ,option2[correct_ans[1]]);
	       printf("\n\n %s \n%s",quest[2] ,option3[correct_ans[2]]);
	       printf("\n\n %s \n%s",quest[3] ,option4[correct_ans[3]]);
	       printf("\n\n %s \n%s",quest[4] ,option5[correct_ans[4]]);

		break;

       case 3:
	      marks = 0;
	      for(i = 0;i <= 5;i++)  {
	      if(correct_ans[i]+1==response[i])   {
	       marks++;
	     }
	   }
	      printf ("\n Out of 5 you score %d",marks);
	      break;
    }
  }
      while(option!=4);
      getch();
      return 1;
}

