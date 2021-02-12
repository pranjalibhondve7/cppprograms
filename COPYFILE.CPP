  //WAP to read one file and write the another file in file1
 #include<fstream.h>
 #include<conio.h>
 void main()
 {
 clrscr();
  char str[2000];
  fstream file_op("file.txt",ios::in);
  fstream file_op1("file2.txt",ios::out);
  while(!file_op.eof())
  {
  file_op.getline(str,2000);
  cout<<str;
	file_op1<<str<<endl ;
  }
  file_op.close();
  cout<<endl;
  getch();
  }

  //fstream file_op("file2.txt",ios::out);


  //file_op<<"Text write to file" ;


 // file_op.close();


