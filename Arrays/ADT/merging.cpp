#include <iostream>
using namespace std;

struct Array
{
    int A[20];
    int size;
    int length;
};

struct Array *merge(struct Array *arr1, struct Array *arr2)
{
    int i = 0, j = 0, k = 0;
    struct Array *arr3 = new struct Array;

    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
        {
            arr3->A[k++] = arr1->A[i++];
        }
        else
        {
            arr3->A[k++] = arr2->A[j++];
        }
    }
    // Copying remaning elements from arr1
    for (; i < arr1->length; i++)
    {
        arr3->A[k++] = arr1->A[i];
    }
    // Copying remaning elements from arr2
    for (; j < arr2->length; j++)
    {
        arr3->A[k++] = arr2->A[j];
    }
    arr3->length = k;
    arr3->size = 20;

    return arr3;
}

void displayArray(struct Array arr)
{
    cout << "Merged elements are: " << endl;
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << " ";
    }
    cout << endl;
}

int main()
{
    struct Array arr1 = {{2, 6, 10, 15, 25}, 10, 5};
    struct Array arr2 = {{3, 4, 7, 18, 20}, 10, 5};
    struct Array *arr3;

    arr3 = merge(&arr1, &arr2);

    displayArray(*arr3); // 2 3 4 6 7 10 15 18 20 25

    delete arr3; // Free Allocated Memory
}