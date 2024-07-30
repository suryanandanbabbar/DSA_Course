#include <iostream>
using namespace std;

struct Array
{
    int A[20];
    int size;
    int length;
};

// Using Loop
int BinarySearch(struct Array arr, int key)
{
    int mid;
    int l = 0;
    int h = arr.length - 1;

    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == arr.A[mid])
        {
            return mid;
        }
        else if (key < arr.A[mid])
        {
            h = mid - 1; // LHS
        }
        else
        {
            l = mid + 1; // RHS
        }
    }
    return -1; // Not Found
}

// Recursive Function
int RBinSearch(int arr[], int l, int h, int key)
{
    int mid;

    if (l <= h)
    {
        mid = (l + h) / 2;
        if (key == arr[mid])
        {
            return mid;
        }
        else if (key < arr[mid])
        {
            return RBinSearch(arr, l, (mid - 1), key); // LHS
        }
        else
        {
            return RBinSearch(arr, (mid + 1), h, key); // RHS
        }
    }

    return -1; // Not Found
}

int main()
{
    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};

    int n; // Element to be searched
    cout << "Enter the element to be searched: ";
    cin >> n;

    cout << "Found at index(-1->Not Found): " << RBinSearch(arr.A, 0, arr.length, n) << endl;
}