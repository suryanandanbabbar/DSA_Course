#include <iostream>
using namespace std;

int main()
{
    char S[100];
    cout << "Enter the string: ";
    cin >> S;

    // Using Loop
    int i;
    for(i = 0; S[i] != '\0'; i++) {
    }
    cout << "Length of String: " << i << endl;

    // Using strlen
    // cout << "Length of String: " << strlen(S) << endl;
}