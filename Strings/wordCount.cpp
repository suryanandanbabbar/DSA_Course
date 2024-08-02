#include <iostream>
using namespace std;

int main()
{
    char S[100];
    cout << "Enter the words: ";
    gets(S);

    int wordCount = 1;
    for (int i = 0; S[i] != '\0'; i++)
    {
        if (S[i] == ' ' && S[i - 1] != ' ')
        {
            wordCount++;
        }
    }

    cout << "Word Count: " << wordCount << endl;
}