#include <iostream>
using namespace std;

// First 'n' Natural Numbers
int missingNatural(int arr[], int n)
{
    /* Steps:
    1. Find the sum of all elements in the array = x
    (till n - 1, since, 1 element is missing)
    2. Find the sum of 'n' natural nos. = y (n(n+1) / 2)

    Therefore, missing element = y - x
    */

    // Finding x
    int sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        sum += arr[i];
    }
    
    // Finding y
    int s = 0;
    s = (n * (n + 1)) / 2;

    // Missing element (y - x)
    return s - sum;
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Missing Number: " << missingNatural(arr, n) << endl;

    return 0;
}