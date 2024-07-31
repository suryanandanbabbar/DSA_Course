#include <iostream>
using namespace std;

struct Array
{
    int A[20];
    int size;
    int length;
};

void InsertSort(struct Array *arr, int x)
{
    int i = arr->length - 1;

    // Check if free space is available or not
    if (arr->length == arr->size)
    {
        return;
    }

    while (i >= 0 && arr->A[i] > x)
    {
        arr->A[i + 1] = arr->A[i];
        i--;
    }
    arr->A[i + 1] = x;
    arr->length++;
}

int isSorted(struct Array arr)
{
    for (int i = 0; i < arr.length - 1; i++)
    {
        if (arr.A[i] > arr.A[i + 1])
        {
            return 0; // Not Sorted
        }
    }
    return 1; // Sorted
}

int rearrange(struct Array *arr)
{
    int *x, *y;
    int i = 0;
    int j = arr->length - 1;

    while (i < j)
    {
        while (arr->A[i] < 0)
            i++;
        while (arr->A[j] >= 0)
            j--;

        if (i < j)
        {
            int temp;
            temp = *x;
            *x = *y;
            *y = temp;
        }
    }
}

void displayArray(struct Array arr)
{
    cout << "Elements are: " << endl;
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << " ";
    }
    cout << endl;
}

int main()
{
    struct Array arr = {{2, 3, 4, 10, 15}, 10, 5};
    struct Array arr2 = {{-2, 3, -4, 10, -15, -35}, 10, 6};

    InsertSort(&arr, 12);
    displayArray(arr);
    cout << "Is Sorted(1/0): " << isSorted(arr) << endl;
    cout << "Rearranging: ";
    rearrange(&arr2);
}