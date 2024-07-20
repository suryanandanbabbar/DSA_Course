#include <iostream>
using namespace std;

void funB(int n);

void funA(int n)
{
    if (n > 0)
    {
        cout << n << " " << endl;
        
        // Calling another function
        funB(n - 1); 
    }
}

void funB(int n)
{
    if (n > 1)
    {
        cout << n << " " << endl;

        // Calling another function
        funA(n / 2);
    }
}

int main()
{
    funA(20); // 20 19 9 8 4 3 1 
    
    return 0;
}