#include <iostream>
using namespace std;

// Using Recursion
int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return sum(n - 1) + n;
    }
}

// Using Formula -> O(1)
int sum2(int n)
{
    return (n * (n + 1)) / 2;
}

// Using Loops -> O(n)
int sum3(int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    int r = sum(5);

    cout << r << endl; // 15
}