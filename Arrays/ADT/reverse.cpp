#include <iostream>
#include <stdio.h>
using namespace std;

struct Array
{
    int A[20];
    int size;
    int length;
};

// Using auxillary array
void Reverse(struct Array *arr)
{
    int *B;
    B = new int[arr->length]; // Auxillary Array

    int i, j;
    // Copying from A to B in reverse order
    for (i = arr->length - 1, j = 0; i >= 0; i--, j++)
    {
        B[j] = arr->A[i];
    }

    // Copying back from B to A
    for (i = 0; i < arr->length; i++)
    {
        arr->A[i] = B[i];
    }
}

// Using swap
void Reverse2(struct Array *arr)
{
    int i, j;
    for (i = 0, j = arr->length - 1; i < j; i++, j--)
    {
        swap(arr->A[i], arr->A[j]);
    }
}

// Using temporary variable
void Reverse3(struct Array *arr)
{
    int i, j, temp;
    for (i = 0, j = arr->length - 1; i < j; i++, j--)
    {
        temp = arr->A[i];
        arr->A[i] = arr->A[j];
        arr->A[j] = temp;
    }
}

void displayArray(struct Array arr)
{
    cout << "In Reverse Order: " << endl;
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << " ";
    }
    cout << endl;
}

int main()
{
    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};

    Reverse3(&arr);
    displayArray(arr);
}