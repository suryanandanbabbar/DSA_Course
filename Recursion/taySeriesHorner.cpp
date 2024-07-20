#include <iostream>
using namespace std;

// Using Recursion
double e(int x, int n)
{
    static double s = 1;

    if (n == 0)
        return s;

    s = 1 + x * s / n;
    return e(x, n - 1);
}

// Using Loop
double e1(int x, int n)
{
    double s = 1;
    for (; n > 0; n--)
    {
        s = 1 + x * s / n;
    }
    return s;
}

int main()
{
    cout << e(1, 10) << endl; // 2.71828
}