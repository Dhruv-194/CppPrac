#include<iostream>
#include<conio.h>

using namespace std;

int main()
  {
  int i,a[5],no,pos;
 
 //Input of intial array
  cout<<"Enter data in Array: ";
  for(i=0;i<5;i++)
  {
  cin>>a[i];
  }
  cout<<"\n\nStored Data in Array: ";
  for(i=0;i<5;i++)
  {
  cout<<a[i];
  }
  
  //Input of element
  pos = 1;
  cout<<"\n\nEnter new number: ";
  cin>>no;
  --pos;
  for(i=5;i>=pos;i--)
  {
  a[i+1]=a[i];
  }
  a[pos]=no;
  
  //Output of final array 
  cout<<"\n\nNew data in Array: ";
  for(i=0;i<6;i++)
  {
  cout<<a[i];
  }
  
  getch();
  }