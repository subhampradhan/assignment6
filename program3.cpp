#include <iostream>
using namespace std;
int main()
{
  int array[10];
  cout<<"\n \nEnter the elements of the array";
  for(int i=0;i<10;i++)
  {
    cout<<"\nElement "<<(i+1)<<": ";
    cin>>array[i];
  }
  cout<<"\n \nPRINTING THE ARRAY BY INDEX METHOD";
  for(int i=0;i<10;i++)
  {
    cout<<"\n"<<array[i];
  }
  int *ptrarray;
  ptrarray=array;
  cout<<"\n \nPRINTING THE ARRAY BY POINTER ACCESSING METHOD";
  for(int i=0;i<10;i++)
  {
    cout<<"\n"<<*ptrarray;
    ptrarray++;
  }
  return 0;
}
