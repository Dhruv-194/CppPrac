
//Find the sum of all array elements

      #include<iostream>

    using namespace std;

    int main ()

    {

        int arr[10], n, i, sum = 0, pro = 1;

        cout << "Enter the size of the array : ";

        cin >> n;

        cout << "\nEnter the elements of the array : ";

        for (i = 0; i < n; i++)

        cin >> arr[i];

        for (i = 0; i < n; i++)

        {

            sum += arr[i];

            pro *= arr[i];

        }

        cout << "\nSum of array elements : " << sum;

        cout << "\nProduct of array elements : " << pro;

        return 0;

    }
//Find maximum and minimum element of an array
    #include<iostream>

    using namespace std;

    int main ()

    {

        int arr[10], n, i, max, min;

        cout << "Enter the size of the array : ";

        cin >> n;

        cout << "Enter the elements of the array : ";

        for (i = 0; i < n; i++)

            cin >> arr[i];

        max = arr[0];

        for (i = 0; i < n; i++)

        {

            if (max < arr[i])

                max = arr[i];

        }

        min = arr[0];

        for (i = 0; i < n; i++)

        {

            if (min > arr[i])

                min = arr[i];

        }

        cout << "Largest element : " << max;

        cout << "Smallest element : " << min;

        return 0;

    }
