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
    cout << "After inserting, elements are: " << endl;
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << " ";
    }
    cout << endl;
}

void insertion(struct Array *arr, int index, int x)
{
    // Checking if given index is valid
    if (index >= 0 && index <= arr->length)
    {
        for (int i = arr->length; i > index; i--)
        {
            // Shifting elements, creating space
            arr->A[i] = arr->A[i - 1];
        }
        // Assigning to the free space
        arr->A[index] = x;

        // Incrementing the length
        arr->length++;
    }
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

    insertion(&arr, 4, 15);
    displayArray(arr);
}