#include <iostream>
using namespace std;

void fun1(int n)
{
    if (n > 0)
    {
        // Printing n
        cout << n << endl;

        // Calling itself : Recursion
        fun1(n - 1);
    }
}

void fun2(int n)
{
    if (n > 0)
    {
        // Calling itself first : Recursion first
        fun2(n - 1);

        // Printing n
        cout << n << endl;
    }
}

int main()
{
    int x = 3;

    fun1(x); // 3 2 1
    fun2(x); // 1 2 3
}