#include <iostream>
using namespace std;

double e(int x, int n)
{
    // Nr, Dr -> power, factorial
    static double p = 1, f = 1;

    // Stores the result
    double r;

    if (n == 0)
    {
        return 1;
    }
    else
    {
        r = e(x, n - 1);
        p = p * x;
        f = f * n;

        return r + p / f;
    }
}

int main()
{
    cout << e(1, 10) << endl;  // 2.71828

    return 0;
}