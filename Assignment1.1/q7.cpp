#include<iostream>
using namespace std;
void selectionSort(int a[], int n) {
   int i, j, min, temp;
   for (i = 0; i < n - 1; i++) {
      min = i;
      for (j = i + 1; j < n; j++)
      if (a[j] < a[min])
      min = j;
      temp = a[i];
      a[i] = a[min];
      a[min] = temp;
   }
}
int main() {
   int a[] = { 22, 91, 35, 78, 10, 8, 75, 99, 1, 67 };
   int n = sizeof(a)/ sizeof(a[0]);
   int i;
   cout<<"Given array is:"<<endl;
   for (i = 0; i < n; i++)
   cout<< a[i] <<" ";
   cout<<endl;
   selectionSort(a, n);
   printf("\nSorted array is: \n");
   for (i = 0; i < n; i++)
   cout<< a[i] <<" ";
   

int pos=10;
int no;

  cout<<"\n\nEnter position to insert number: ";
  cin>>pos;
  if(pos>10)
  {
  cout<<"\n\nThis is out of range";
  }
  else
  {
  cout<<"\n\nEnter new number: ";
  cin>>no;
  --pos;
  for(i=10;i>=pos;i--)
  {
  a[i+1]=a[i];
  }
  a[pos]=no;
  cout<<"\n\nNew data in Array: ";
  for(i=0;i<11;i++)
  {
  cout<<a[i];
  }
  }



}