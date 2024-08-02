#include <iostream>
using namespace std;

void reverseString1(char *A)
{
    char B[100];
    int i, j;

    for (i = 0; A[i] != '\0'; i++)
    {
    }
    i -= 1;

    for (j = 0; i >= 0; i--, j++)
    {
        B[j] = A[i];
    }

    B[j] = '\0'; // at the end, add null character
    cout << "Reversed String1: " << B << endl;
}

void reverseString2(char *A)
{
    int i, j, t;

    for (j = 0; A[j] != '\0'; j++)
    {
    }
    j -= 1;

    for (i = 0; i < j; i++, j--)
    {
        t = A[i];
        A[i] = A[j];
        A[j] = t;
    }

    cout << "Reversed String2: " << A << endl;
}

int main()
{
    char S[100];
    cout << "Enter the string: ";
    cin >> S;

    reverseString1(S);
    reverseString2(S);
    
    cout << "Reversing using reverse function: ";
    reverse(S, S);
    cout << S << endl;
}