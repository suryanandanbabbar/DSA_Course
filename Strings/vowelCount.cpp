#include <iostream>
using namespace std;

int main()
{
    char vowels[12] = "aeiouAEIOU";

    char S[100];
    cout << "Enter the String: ";
    cin >> S;

    int i, j, vcount = 0;
    for (i = 0; S[i] != '\0'; i++)
    {
        for (j = 0; vowels[j] != '\0'; j++)
        {
            if (S[i] == vowels[j])
            {
                vcount++;
            }
        }
    }
    cout << "Vowel Count: " << vcount << endl;
}