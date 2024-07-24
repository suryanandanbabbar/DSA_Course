#include <iostream>
using namespace std;

struct Array
{
    int *A;
    int size;
    int length;
};

void displayArray(struct Array arr)
{
    cout << "After appending, elements are: " << endl;
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << " ";
    }
    cout << endl;
}

void append(struct Array *arr, int x)
{
    // Check if free space is available
    if (arr->length < arr->size)
    {
        // Array[length++] = Array[last position]
        arr->A[arr->length++] = x;
    }
}

int main()
{
    struct Array arr;
    int n;

    cout << "Enter size of array: ";
    cin >> arr.size;

    arr.A = new int(arr.size); // In Heap
    arr.length = 0;            // No elements now

    cout << "How many numbers?: ";
    cin >> n;

    cout << "Enter all elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr.A[i];
    }
    arr.length = n;

    append(&arr, 10);
    displayArray(arr);
}