 //WAP to read the file
 #include<fstream.h>
 #include<conio.h>
 void main()
 {
  char str[2000];
  fstream file_op("AA.cpp",ios::in);
  while(!file_op.eof())
  {
  file_op.getline(str,2000);
  cout<<str<<endl;
  }
  file_op.close();
  cout<<endl;
  getch();
  }