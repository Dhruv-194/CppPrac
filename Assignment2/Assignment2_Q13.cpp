// CPP program to find minimum (or maximum) element
// in an array without using recursion
#include <bits/stdc++.h>
using namespace std;

int getMin(int arr[], int n)
{
	int res = arr[0];
	for (int i = 1; i < n; i++)
		res = min(res, arr[i]);
	return res;
}

int getMax(int arr[], int n)
{
	int res = arr[0];
	for (int i = 1; i < n; i++)
		res = max(res, arr[i]);
	return res;
}

int main()
{
	int arr[] = { 12, 1234, 45, 67, 1 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Minimum element of array: " << getMin(arr, n) << "\n";
	cout << "Maximum element of array: " << getMax(arr, n);
	return 0;
}


// CPP program to find minimum (or maximum) element
// in an array using recursion.
#include <bits/stdc++.h>
using namespace std;

int getMin(int arr[], int n)
{
	// If there is single element, return it.
	// Else return minimum of first element and
	// minimum of remaining array.
	return (n == 1) ? arr[0] : min(arr[0], getMin(arr + 1, n - 1));
}

int getMax(int arr[], int n)
{
	// If there is single element, return it.
	// Else return maximum of first element and
	// maximum of remaining array.
	return (n == 1) ? arr[0] : max(arr[0], getMax(arr + 1, n - 1));
}

int main()
{
	int arr[] = { 12, 1234, 45, 67, 1 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Minimum element of array: " << getMin(arr, n) << "\n";
	cout << "Maximum element of array: " << getMax(arr, n);
	return 0;
}

