#include<iostream>
using namespace std;

int main()
{
int arr[20];
int length;
int i;

cout<<"enter the length of array"<<endl;
cin>>length;

cout<<"Enter the values of Array"<<endl;
for(i=0;i<length;i++ )
{
    cin>>arr[i];
}
cout<<"\n";
cout<<"The array is = " <<endl;
for(i=0;i<length;i++){
    cout<<arr[i]<< " ";
}

int n = length;
int position;
for (i = 0; i < (n - 1); i++) // finding minimum element (n-1) times
{
position = i;
for (int j = i + 1; j < n; j++)
{
if (arr[position] > arr[j])
position = j;

}
if (position != i)
{
int temp = arr[i];
arr[i] = arr[position];
arr[position] = temp;
}
}
cout << "\n";
cout<< "The array after selection sort is "<<endl;
for(i=0;i<length;i++){
    cout<<arr[i]<< " ";
}

}
