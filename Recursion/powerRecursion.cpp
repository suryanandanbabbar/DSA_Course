#include <iostream>
using namespace std;

int pow1(int m, int n)
{
    if (n == 0)
        return 1;
    else
        return pow(m, n - 1) * m;
}

// Optimising Recursive Function
int pow2(int m, int n)
{
    if (n == 0)
        return 1;
    if (n % 2 == 0)
        return pow(m * m, n / 2);
    else
        return m * pow(m * m, (n - 1) / 2);
}

int main()
{
    int r = pow1(2, 9);

    cout << r << endl; // 512
}