#include <iostream>
using namespace std;

// Using Recursion
int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return factorial(n - 1) * n;
}

// Using Loops
int factorial2(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f *= i;
    }
    return f; 
}
int main()
{
    int r = factorial2(5);

    cout << r << endl; // 120
}