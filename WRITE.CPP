  //WAP to write the file
 #include<fstream.h>
 #include<conio.h>
 void main()
 {
 clrscr();
  //char str[2000];
  fstream file_op("file.txt",ios::out);


  file_op<<"Text write to file" ;


  file_op.close();

  getch();
  }