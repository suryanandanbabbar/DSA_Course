#include <iostream>
using namespace std;

int main()
{
    int A[5] = {2, 4, 6, 8, 10}; // Created in Stack
    int *p;

    p = new int[5]; // Created in Heap
    p[0] = 3;
    p[1] = 5;
    p[2] = 7;
    p[3] = 9;
    p[4] = 11;

    cout << "Array A: ";
    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << endl;
    } // 2 4 6 8 10

    cout << "Pointer P: ";
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << endl;
    } // 3 5 7 9 11
}