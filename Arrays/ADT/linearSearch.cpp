#include <iostream>
using namespace std;

struct Array
{
    int A[20];
    int size;
    int length;
};

int LinearSearch(struct Array arr, int key)
{
    for (int i = 0; i < arr.length; i++)
    {
        if (key == arr.A[i])
        {
            return i; // Found, return index
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

    cout << "Found at index: " << LinearSearch(arr, n) << endl;
}