#include <iostream>
using namespace std;

void anagram(string s1, string s2)
{

    // Comparing Sizes
    if (s1.size() != s2.size())
    {
        cout << "Not an anagram" << endl;
        return;
    }

    int H[26] = {0};

    for (int i = 0; i < s1.length(); i++)
    {
        H[s1[i] - 97]++;
    }
    for (int i = 0; i < s2.length(); i++)
    {
        H[s2[i] - 97]--;
    }
    for (int i = 0; i < 26; i++)
    {
        if (H[i] < 0)
        {
            cout << "Not an anagram" << endl;
            return; 
        }
    }

    cout << "Anagram" << endl; 
}

int main()
{
    string str1 = "medical";
    string str2 = "decimal";

    anagram(str1, str2);
}