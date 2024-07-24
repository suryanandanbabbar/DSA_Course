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
    cout << "After deletion, elements are: " << endl;
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << " ";
    }
    cout << endl;
}

int deletion(struct Array *arr, int index)
{
    int x = 0; // For Deleted Value, initially ZERO

    // Checks if index is valid
    if (index >= 0 && index <= arr->length - 1)
    {
        // Get the value at given index
        x = arr->A[index];
        for (int i = index; i < (arr->length - 1); i++)
        {
            // Shifting elements
            arr->A[i] = arr->A[i + 1];
        }
        // Decrementing length, since element is deleted
        arr->length--;

        return x; // Returning the deleted value
    }
    // If index is invalid, return 0
    return 0;
}

int main()
{
    struct Array arr;
    int n;

    cout << "Enter size of array: ";
    cin >> arr.size;

    arr.A = new int(arr.size); // In Heap

    arr.length = 0; // No elements now

    cout << "How many numbers?: ";
    cin >> n;

    cout << "Enter all elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr.A[i];
    }
    arr.length = n;

    cout << deletion(&arr, 2) << endl;
    displayArray(arr);
}