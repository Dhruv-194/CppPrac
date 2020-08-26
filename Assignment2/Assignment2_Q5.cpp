
// Print all the numbers from 1 to n

// Without recursion
#include <iostream>
using namespace std;

int main()
{
    int i = 0;

begin:
    i = i + 1;
    cout << i << " ";

    if (i < 100)
    {
        goto begin;
    }
    return 0;
}
//with recursion
#include <iostream>
using namespace std;

int main()
{
    static int i = 1;

    if (i <= 100)
    {
        cout << i++ << " ";
        main();
    }
    return 0;
}
