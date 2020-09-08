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


int  j, temp;
for (i = 1; i < length; i++)
{
j = i;
while ( j > 0 && arr [j - 1] > arr [j] )
{
temp = arr [j];
arr[j] = arr [j - 1];
arr[j - 1] = temp;
j--;
}
}

cout << "\n";
cout<< "The array after insertion sort is "<<endl;
for(i=0;i<length;i++){
    cout<<arr[i]<< " ";
}

}
