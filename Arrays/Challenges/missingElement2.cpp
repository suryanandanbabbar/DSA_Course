#include <iostream>
using namespace std;

void missingElement(int arr[], int n)
{
    /* Finding Missing Element in an array with sorted elements present
    in any order like [6, 7, 8, 9 , ...]
    Steps:
        1. Number - Index = Difference
        Example:
            6 - 0 = 1
            7 - 1 = 6
            8 - 2 = 6
            .
            .
            13 - 5 = 7 (Different (!= 6))
            Here, a number is missing:
                At this index,
                add Index + Difference = 6 + 6 = 12
                Therefore, '12' is missing element
     */
    int low = arr[0];
    
    int difference = low - 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] - i != difference)
        {
            cout << "Missing Element: " << i + difference << endl;
            break;
        }
        i++;
    }
}

int main()
{
    int n = 11;
    int arr[11] = {6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17};

    missingElement(arr, n);
}