#include <iostream>
using namespace std;

void missingMulElement(int arr[], int n)
{
    /* Finding Multiple Missing Elements in an array with sorted elements present
    in any order like [6, 7, 8, 9, 11, 12, 15...]
    Steps:
        1. Number - Index = Difference
        Example:
            6 - 0 = 1
            7 - 1 = 6
            8 - 2 = 6
            .
            .
            11 - 4 = 7 (Different (!= 6))
            This '7' becomes new difference.
            Here, numbers are missing:
                At index 4, with difference 7,
                add Index + Difference = 4 + 6 = 10
                Therefore, '10' is missing element
                And for the next missing element:
                    Index + New Difference = 4 + 7 = 11
                    Continue this process until the end of the array.
     */

    int low = arr[0];

    int difference = low - 0;
    for (int i = 0; i < n; i++)
    {
        while (arr[i] - i > difference)
        {
            cout << "Missing Element: " << i + difference << endl;
            difference++;
        }
    }
}

// For unsorted array
void missingMulElements2(int arr[], int n)
{
    int l = arr[0];
    int h = arr[n-1];

    int H[100] = {0};

    for (int i = 0; i < n; i++)
    {
        H[arr[i]]++;
    }

    for (int i = l; i <= h; i++)
    {
        if (H[i] == 0)
            cout << "Missing Element: " << i << endl;
    }
}

int main()
{
    int n = 10;
    int arr1[10] = {6, 7, 8, 9, 11, 15, 16, 17, 18, 19};
    int arr2[10] = {3, 7, 4, 9, 12, 6, 1, 11, 2, 10};

    missingMulElements2(arr2, n);
}