#include <iostream>
using namespace std;

int fun(int n)
{
    if (n > 0)
    {
        return fun(n - 1) + n;
    }
    return 0;
}

int fun1(int n)
{
    // Static Variable
    static int x = 0;
    if (n > 0)
    {
        x++;
        return fun1(n - 1) + x;
    }
    return 0;
}

// Global Variable (gives the same result)
int y = 0;
int fun2(int n)
{
    if (n > 0)
    {
        y++;
        return fun2(n - 1) + y;
    }
    return 0;
}

int main()
{
    int r, r1, r2;
    r = fun(5);
    r1 = fun1(5);
    r2  = fun2(5);

    cout << r << endl;  // 15
    cout << r1 << endl; // 25
    cout << r2 << endl; // 25

    return 0;
}