
#include <iostream>
using namespace std;
int main()
{
int a[20],n;
int b[20];

cout<<"Enter the size of Array 1";
cin>>n;

cout<<"Enter all the elements of the array1"<<endl;
for(int i =0; i<n;i++){
    cin>>a[i];
}

cout <<"The array1 is:"<<endl;
for (int i =0; i<n;i++){
    cout<<a[i]<<" ";
}

cout<<"Enter the size of Array 2";
cin>>n;

cout<<"Enter all the elements of the array2"<<endl;
for(int i =0; i<n;i++){
    cin>>b[i];
}

cout <<"The array2 is:"<<endl;
for (int i =0; i<n;i++){
    cout<<b[i]<<" ";
}

   for(int i = 0; i < n- 1; ++i)
   {
      int swapped = 0;

      for(int j = 0; j < (n - i - 1); ++j)
         if(a[j] > a[j+1])
         {
            int temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;

            swapped = 1;
         }
      if(!swapped)
         break;
   }

   cout<<"\n First Array after sorting: ";
   for(int i = 0; i < n; ++i)
     cout<<a[i]<<" ";



    for(int i = 0; i < n - 1; ++i)
   {
      int s = 0;

      for(int j = 0; j < (n - i - 1); ++j)
         if(b[j] > b[j+1])
         {
            int temp = b[j];
            b[j] = b[j+1];
            b[j+1] = temp;

            s = 1;
         }
      if(!s)
         break;
   }

   cout<<"\n Second Array after sorting: ";
   for(int i = 0; i < n; ++i)
     cout<< b[i] <<" ";



cout<<" \n";
int flag = 0;

for (int i=0;i<=n;i++)
{


        if (a[i] > b[i])
        {
            cout << a[i] << " | ";
            flag++;
        }
        else if (a[i] < b[i])
        {
            cout << b[i] << " | ";

        }

}

if (flag>= n)
{
   cout<<"Yes saved";
}

else {
    cout<<"No can't save";
}

    return 0;
}
