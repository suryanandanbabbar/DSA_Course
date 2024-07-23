#include <iostream>
using namespace std;

// Factorial Function
int fact(int n)
{
    if (n == 0)
        return 1;

    return fact(n - 1) * n;
}

// Using factorial function
int nCr(int n, int r)
{
    int num, den;

    num = fact(n);
    den = fact(r) * fact(n - r);

    return num / den;
}

// Using Pascal's Triangle
int nCrPascal(int n, int r)
{
    if (r == 0 || n == r)
        return 1;
    else
        return nCrPascal((n - 1), (r - 1)) + nCrPascal((n - 1), r);
}

int main()
{
    cout << nCr(5, 1) << endl;       // 5
    cout << nCrPascal(5, 1) << endl; // 5
}