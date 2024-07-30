#include <iostream>
using namespace std;

struct Array
{
    int A[20];
    int size;
    int length;
};

struct Array *difference(struct Array *arr1, struct Array *arr2)
{
    int i = 0, j = 0, k = 0;
    struct Array *arr3 = new struct Array;

    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
        {
            arr3->A[k++] = arr1->A[i++];
        }
        else if (arr2->A[j] < arr1->A[i])
        {
            j++;
        }
        else
        {
            i++;
            j++;
        }
    }

    // Copying remaning elements from arr1
    for (; i < arr1->length; i++)
    {
        arr3->A[k++] = arr1->A[i++];
    }

    arr3->length = k;
    arr3->size = 10;

    return arr3;
}

void displayArray(struct Array arr)
{
    cout << "Difference is: " << endl;
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << " ";
    }
    cout << endl;
}

int main()
{
    struct Array arr1 = {{2, 6, 10, 15, 25}, 10, 5};
    struct Array arr2 = {{3, 6, 7, 15, 20}, 10, 5};
    struct Array *arr3;

    arr3 = difference(&arr1, &arr2);

    displayArray(*arr3); // 2 3 6 7 10 15 20 25
}