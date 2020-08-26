//Print all the numbers from n to 1

//without recursion
#include <bits/stdc++.h>
using namespace std;

// Recursive function to print from N to 1
void PrintReverseOrder(int N)
{

    for (int i = N; i > 0; i--)
        cout << i << " ";

}
  // Driver Code
int main()
{
    int N = 5;

    PrintReverseOrder(N);

    return 0;
}


//With Recursion
#include <bits/stdc++.h>
using namespace std;

// Recursive function to print from N to 1
void PrintReverseOrder(int N)
{
    // if N is less than 1
    // then return void function
    if (N <= 0) {
        return;
    }
    else {
        cout << N << " ";

        // recursive call of the function
        PrintReverseOrder(N - 1);
    }
}
  // Driven Code
int main()
{
    int N = 5;

    PrintReverseOrder(N);

    return 0;
}
