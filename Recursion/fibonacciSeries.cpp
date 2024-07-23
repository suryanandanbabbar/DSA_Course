#include <iostream>
using namespace std;

// Returns the 'nth' term
// Or, the sum till index 'n'
int fib(int n)
{
    if (n <= 1)
        return n;
    else
        return fib(n - 2) + fib(n - 1); 
}

// Using Loops
int fibLoops(int n)
{
    int a = 0;   // First Term
    int b = 1;   // Second Term
    int sum = 0; // Sum

    if (n <= 1)
        return n;

    for (int i = 2; i <= n; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
    }
    return sum;
}

// Using Memoization
int F[100];

int fibMemo(int n) {
    if (n <= 1) {
        F[n] = n;
        return n;
    } else {
        if (F[n-2] == -1) 
            F[n-2] = fibMemo(n-2);
        if (F[n-1] == -1) 
            F[n-1] = fibMemo(n-1);
        return F[n-2] + F[n-1];
    }
}
int main()
{
    // Initialising F[] array
    for (int i = 0; i < 100; i++) {
        F[i] = -1;
    }

    cout << fib(5) << endl;      // 5 O(2^n)
    cout << fibLoops(5) << endl; // 5 O(n)
    cout << fibMemo(5) << endl;  // 5 O(n)

}