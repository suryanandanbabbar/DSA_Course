#include <iostream>
using namespace std;

void duplicates(int arr[], int n)
{
    int lastDuplicate = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[i + 1] && arr[i] != lastDuplicate)
        {
            cout << "Duplicate Element: " << arr[i] << endl;
            lastDuplicate = arr[i];
        }
    }
}

void countingDuplicates(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            j = i + 1;
            while (arr[j] == arr[i])
                j++;
            cout << arr[i] << " appears " << j - i << " times\n";
            i = j - 1;
        }
    }
}

int main()
{
    int n = 10;
    int arr[10] = {3, 6, 8, 8, 10, 12, 15, 15, 15, 20};

    countingDuplicates(arr, n);
}