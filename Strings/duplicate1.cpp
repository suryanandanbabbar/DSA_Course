#include <iostream>
using namespace std;

int main()
{
    char S[100];
    cout << "Enter String: ";
    cin >> S;

    int H[26] = {0}; // Hash Table

    int i;
    // Incrementing the indices of Hash Table
    for (i = 0; S[i] != '\0'; i++)
    {
        H[S[i] - 97] += 1;
    }

    // Searching for indices more than 1 in Hash Table
    for (i = 0; i < 26; i++)
    {
        if (H[i] > 1)
        {
            cout << "Duplicate Character: " << char(i + 97) << endl;
            cout << "No. of times repeated: " << H[i] << endl;
        }
    }
}