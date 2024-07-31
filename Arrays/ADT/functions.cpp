// Get, Set, Sum, Max, Min, Avg
#include <iostream>
using namespace std;

struct Array
{
    int A[20];
    int size;
    int length;
};

int get(struct Array arr, int index)
{
    if (index >= 0 && index < arr.length)
    {
        return arr.A[index];
    }
    return -1; // Not Found
}

void set(struct Array *arr, int index, int x)
{
    if (index >= 0 && index < arr->length)
    {
        arr->A[index] = x;
    }
    else
    {
        cout << "Invalid Index" << endl;
    }
}

int max(struct Array arr)
{
    int max = arr.A[0];

    for (int i = 1; i < arr.length; i++)
    {
        if (arr.A[i] > max)
        {
            max = arr.A[i];
        }
    }
    return max;
}

int min(struct Array arr)
{
    int min = arr.A[0];

    for (int i = 1; i < arr.length; i++)
    {
        if (arr.A[i] < min)
        {
            min = arr.A[i];
        }
    }
    return min;
}

int sum(struct Array arr)
{
    int sum = 0;

    for (int i = 0; i < arr.length; i++)
    {
        sum += arr.A[i];
    }
    return sum;
}

float avg(struct Array arr)
{
    return (float)sum(arr) / arr.length;
}

void displayArray(struct Array arr)
{
    cout << "Updated elements are: " << endl;
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << " ";
    }
    cout << endl;
}

int main()
{
    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};

    int x, n, a, b;
    
    // Menu
    do
    {

        cout << "Type the operation: " << endl;
        cout << "'1' for get" << endl;
        cout << "'2' for set" << endl;
        cout << "'3' for max" << endl;
        cout << "'4' for min" << endl;
        cout << "'5' for sum" << endl;
        cout << "'6' for avg" << endl;
        cout << "'7' for exit" << endl;

        
        cout << "Enter the number: ";
        cin >> n;

        switch (n)
        {
        // get()
        case 1:

            cout << "Enter the index to get: ";
            cin >> x;
            cout << get(arr, x) << endl;
            break;

        // set()
        case 2:

            cout << "Enter the index to set: ";
            cin >> a;
            cout << "Enter the number to set: ";
            cin >> b;
            set(&arr, a, b);
            displayArray(arr);
            break;

        // max()
        case 3:
            cout << "Maximum Element: ";
            cout << max(arr) << endl;
            break;

        // min()
        case 4:
            cout << "Minimum Element: ";
            cout << min(arr) << endl;
            break;

        // sum()
        case 5:
            cout << "Sum of Elements: ";
            cout << sum(arr) << endl;
            break;

        // avg()
        case 6:
            cout << "Avg of Elements: ";
            cout << avg(arr) << endl;
            break;
        }
    } while (n < 6);
    
}