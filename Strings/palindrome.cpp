#include <iostream>
using namespace std;

int main()
{
    char S[100];
    cout << "Enter string: ";
    cin >> S;

    int i, j;
    for (j = 0; S[j] != '\0'; j++)
    {
    }
    j = j - 1;

    for (i = 0; i < j; i++, j--)
    {
        if (S[i] != S[j])
            break;
    }

    if (S[i] == S[j])
        cout << "Palindrome." << endl;

    else
        cout << "Not a Palindrome." << endl;
}