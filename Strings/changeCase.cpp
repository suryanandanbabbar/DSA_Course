#include <iostream>
using namespace std;

int main() {
    char S[100];
    cout << "Enter the string: ";
    cin >> S;

    cout << "Change to: " << endl;
    cout << "1. Uppercase" << endl;
    cout << "2. Lowercase" << endl;

    int n, i, j;
    cin >> n;

    switch(n) {
        // Convert to Uppercase
        case 1:
        for (i = 0; S[i] != '\0'; i++) {
            S[i] -= 32;
        }
        cout << "Updated String is: " << S << endl;
        break;

        // Convert to Lowercase
        case 2:
        for(j = 0; S[j] != '\0'; j++) {
            S[j] += 32;
        }
        cout << "Updated String is: " << S << endl;
        break;
    }

    
}