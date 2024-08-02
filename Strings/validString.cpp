#include <iostream>
using namespace std;

int valid(char *name)
{
    for (int i = 0; name[i] != '\0'; i++)
    {
        if (!(name[i] >= 65 && name[i] <= 90) && !(name[i] >= 97 && name[i] <= 122) && !(name[i] >= 48 && name[i] <= 57))
        {
            return 0; // Invalid String
        }
    }
    return 1; // Valid String
}

int main()
{
    char S[100];
    cout << "Enter String: ";
    cin >> S;

    if (valid(S))
        cout << "Valid String" << endl;
    else
        cout << "Invalid String" << endl;
}