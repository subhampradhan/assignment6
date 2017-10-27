#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main()
{
  char name[50];
  char *nameptr;
  cout<<"\n \nEnter your name: ";
  cin.getline(name,50);
  cout<<"\n \nPROGRAM TO PRINT STRING BY NORMAL INDEX METHOD: \n";
  for(int i=0;name[i]!='\0';i++)
  {
   cout<<name[i];
  } 
  nameptr=name;
  cout<<"\n \nPROGRAM TO PRINT STRING BY POINTER METHOD: \n";
  cout<<nameptr;
  cout<<endl;
  return 0;
}
