//Find the sum of all the natural numbers up to n


// C++ program to find sum of natural numbers without using recursion
#include <iostream>
using namespace std;
int sum_of_natural_numbers(int n)
{
int sum = 0;
for(int i = 1; i <= n; i++)
{
sum += i;
}
return sum;
}
int main()
{
int n;
cout << �\nEnter the number : �;
cin >> n;
cout << �\nSum of � << n << � Natural Numbers is � << sum_of_natural_numbers(n);
cout << endl;
return 0;
}

// C++ program to find sum of natural numbers using recursion

#include <iostream>
using namespace std;
int sum_of_natural_numbers(int n)
{
if(n == 0)
return 0;
return n + sum_of_natural_numbers(n � 1);
}

int main()
{
int n;
cout << �\nEnter the number : �;
cin >> n;
cout << �\nSum of � << n << � Natural Numbers is � << sum_of_natural_numbers(n);
cout << endl;
return 0;
}

