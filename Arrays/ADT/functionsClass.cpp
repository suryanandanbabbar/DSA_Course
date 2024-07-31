#include <iostream>
using namespace std;

class Array
{
private:
    int *A;
    int size;
    int length;
    void swap(int *x, int *y);

public:
    Array()
    {
        size = 10;
        length = 0;
        A = new int[size];
    }
    Array(int sz)
    {
        size = sz;
        length = 0;
        A = new int[size];
    }
    ~Array()
    {
        delete[] A;
    }
    void displayArray();
    void append(int x);
    void insertion(int index, int x);

    int LinearSearch(int key);
    int BinarySearch(int key);
    int deletion(int index);
    int get(int index);
    void set(int index, int x);
    int max();
    int min();
    int sum();
    float avg();
    void Reverse();
    void Reverse2();
    void InsertSort(int x);
    int isSorted();
    void rearrange();
    Array *merge(Array arr2);
    Array *Union(Array arr2);
    Array *intersection(Array arr2);
    Array *difference(Array arr2);
};

void Array::displayArray()
{
    cout << "After appending, elements are: " << endl;
    for (int i = 0; i < length; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

void Array::append(int x)
{
    // Check if free space is available
    if (length < size)
    {
        // Array[length++] = Array[last position]
        A[length++] = x;
    }
}
void Array::insertion(int index, int x)
{
    // Checking if given index is valid
    if (index >= 0 && index <= length)
    {
        for (int i = length; i > index; i--)
        {
            // Shifting elements, creating space
            A[i] = A[i - 1];
        }
        // Assigning to the free space
        A[index] = x;

        // Incrementing the length
        length++;
    }
}
int Array::LinearSearch(int key)
{
    for (int i = 0; i < length; i++)
    {
        if (key == A[i])
        {
            return i; // Found, return index
        }
    }
    return -1; // Not Found
}

int Array::BinarySearch(int key)
{
    int mid;
    int l = 0;
    int h = length - 1;

    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == A[mid])
        {
            return mid;
        }
        else if (key < A[mid])
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

int Array::deletion(int index)
{
    int x = 0; // For Deleted Value, initially ZERO

    // Checks if index is valid
    if (index >= 0 && index <= length - 1)
    {
        // Get the value at given index
        x = A[index];
        for (int i = index; i < (length - 1); i++)
        {
            // Shifting elements
            A[i] = A[i + 1];
        }
        // Decrementing length, since element is deleted
        length--;

        return x; // Returning the deleted value
    }
    // If index is invalid, return 0
    return 0;
}

int Array::get(int index)
{
    if (index >= 0 && index < length)
    {
        return A[index];
    }
    return -1; // Not Found
}

void Array::set(int index, int x)
{
    if (index >= 0 && index < length)
    {
        A[index] = x;
    }
    else
    {
        cout << "Invalid Index" << endl;
    }
}

int Array::max()
{
    int max = A[0];

    for (int i = 1; i < length; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    return max;
}

int Array::min()
{
    int min = A[0];

    for (int i = 1; i < length; i++)
    {
        if (A[i] < min)
        {
            min = A[i];
        }
    }
    return min;
}

int Array::sum()
{
    int sum = 0;

    for (int i = 0; i < length; i++)
    {
        sum += A[i];
    }
    return sum;
}

float Array::avg()
{
    return (float)sum() / length;
}

void Array::Reverse()
{
    int *B;
    B = new int[length]; // Auxillary Array

    int i, j;
    // Copying from A to B in reverse order
    for (i = length - 1, j = 0; i >= 0; i--, j++)
    {
        B[j] = A[i];
    }

    // Copying back from B to A
    for (i = 0; i < length; i++)
    {
        A[i] = B[i];
    }
}

void Array::Reverse2()
{
    int *x, *y;
    int i, j;
    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        int temp;
        temp = *x;
        *x = *y;
        *y = temp;
    }
}
void Array::InsertSort(int x)
{
    int i = length - 1;

    // Check if free space is available or not
    if (length == size)
    {
        return;
    }

    while (i >= 0 && A[i] > x)
    {
        A[i + 1] = A[i];
        i--;
    }
    A[i + 1] = x;
    length++;
}

int Array::isSorted()
{
    for (int i = 0; i < length - 1; i++)
    {
        if (A[i] > A[i + 1])
        {
            return 0; // Not Sorted
        }
    }
    return 1; // Sorted
}

void Array::rearrange()
{
    int *x, *y;
    int i = 0;
    int j = length - 1;

    while (i < j)
    {
        while (A[i] < 0)
            i++;
        while (A[j] >= 0)
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

Array *Array::merge(Array arr2)
{
    int i = 0, j = 0, k = 0;
    Array *arr3 = new Array(length + arr2.length);

    while (i < length && j < arr2.length)
    {
        if (A[i] < arr2.A[j])
        {
            arr3->A[k++] = A[i++];
        }
        else
        {
            arr3->A[k++] = arr2.A[j++];
        }
    }
    // Copying remaning elements from arr1
    for (; i < length; i++)
    {
        arr3->A[k++] = A[i];
    }
    // Copying remaning elements from arr2
    for (; j < arr2.length; j++)
    {
        arr3->A[k++] = A[j];
    }
    arr3->length = length + arr2.length;

    return arr3;
}

Array *Array::intersection(Array arr2)
{
    int i = 0, j = 0, k = 0;
    Array *arr3 = new Array(length + arr2.length);

    while (i < length && j < arr2.length)
    {
        if (A[i] < arr2.A[j])
        {
            i++;
        }
        else if (arr2.A[j] < A[i])
        {
            j++;
        }
        else if (A[i] == arr2.A[j])
        {
            arr3->A[k++] = A[i++];
            j++;
        }
    }

    arr3->length = k;

    return arr3;
}
Array *Array::difference(Array arr2)
{
    int i = 0, j = 0, k = 0;
    Array *arr3 = new Array(length + arr2.length);

    while (i < length && j < arr2.length)
    {
        if (A[i] < arr2.A[j])
        {
            arr3->A[k++] = A[i++];
        }
        else if (arr2.A[j] < A[i])
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
    for (; i < length; i++)
    {
        arr3->A[k++] = A[i++];
    }

    arr3->length = k;

    return arr3;
}

Array *Array::Union(Array arr2)
{
    int i = 0, j = 0, k = 0;
    Array *arr3 = new Array(length + arr2.length);

    while (i < length && j < arr2.length)
    {
        if (A[i] < arr2.A[j])
        {
            arr3->A[k++] = A[i++];
        }
        else if (arr2.A[j] < A[i])
        {
            arr3->A[k++] = arr2.A[j++];
        }
        else
        {
            arr3->A[k++] = A[i++];
            j++;
        }
    }
    // Copying remaning elements from arr1
    for (; i < length; i++)
    {
        arr3->A[k++] = A[i++];
    }
    // Copying remaning elements from arr2
    for (; j < arr2.length; j++)
    {
        arr3->A[k++] = A[j++];
    }
    arr3->length = k;

    return arr3;
}

int main()
{
    Array *arr1;

    int ch, sz;
    int x, index;

    cout << "Enter Size of Array";
    scanf("%d", &sz);

    arr1 = new Array(sz);

    do
    {
        cout << "\n\nMenu\n";
        cout << "1. Insert\n";
        cout << "2. Delete\n";
        cout << "3. Search\n";
        cout << "4. Sum\n";
        cout << "5. Display\n";
        cout << "6. Exit\n";
        cout << "enter you choice ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "Enter an element and index: ";
            cin >> x >> index;
            arr1->insertion(index, x);
            break;

        case 2:
            cout << "Enter index: ";
            cin >> index;
            x = arr1->deletion(index);
            cout << "Deleted Element is: " << x;
            break;

        case 3:
            cout << "Enter element to search: ";
            cin >> x;
            index = arr1->LinearSearch(x);
            cout << "Element index: " << index;
            break;

        case 4:
            cout << "Sum is: " << arr1->sum();
            break;

        case 5:
            arr1->displayArray();
        }
    } while (ch < 6);
    return 0;
}