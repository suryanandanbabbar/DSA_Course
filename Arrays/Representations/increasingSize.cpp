#include <iostream>
using namespace std;

int main()
{
    int *p, *q;
    p = new int[5];

    p[0] = 3;
    p[1] = 5;
    p[2] = 7;
    p[3] = 9;
    p[4] = 11;

    // New array with larger size (in Heap)
    q = new int[10];
    for (int i = 0; i < 5; i++)
    {
        q[i] = p[i];
    }

    delete[] p; // Free 'p'
    p = q;      // Address of 'q' will be 'p'
    q = NULL;   // No need of 'q' now

    // Adding more elements
    p[5] = 2;
    p[6] = 4;
    p[7] = 6;
    p[8] = 8;
    p[9] = 10;

    for (int i = 0; i < 10; i++)
    {
        cout << p[i] << endl;
    } // 3 5 7 9 11 2 4 6 8 10
}