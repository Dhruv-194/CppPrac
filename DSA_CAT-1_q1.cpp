#include<iostream>
using namespace std;

int main()
{
    int arr1[20];
    int arr2[20];
    int arr3[50];
    int n,m;
    int i;
    cout<<"Enter the length of array 1"<<endl;
    cin>>n;
    cout<<"Enter the values of array 1"<<endl;
    for (i=0;i<n;i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter the length of array 2" <<endl;
    cin>>m;
    cout << "Enter the values of array 2" <<endl;
    for (i=0;i<m;i++)
    {
        cin >>arr2[i];
    }


    int start = 0;
    int en = m-1;
    while (start <m-1 ){

        int temp = arr2[start];
        arr2[start]= arr2[en];
        arr2[en]=temp;
        start++;
        en--;
    }



    for(i=0; i<n; i++)
	{
		arr3[i]=arr1[i];
	}
	int size=n+m;
	int k=0;
	for(i=0, k=n; k<size&& i<m; i++, k++)
	{
		arr3[k]=arr2[i];
	}
    cout << "The final array is = "<<endl;
    for (i=0;i<size;i++)
    {
        cout << arr3[i]<<" ";
    }
}
