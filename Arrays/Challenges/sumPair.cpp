#include <iostream>
using namespace std;

void sumPair(int arr[], int n, int key)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == key)
            {
                printf("Pair: [%d, %d]\n", arr[i], arr[j]);
            }
        }
    }
}

int main()
{
    int n = 10;
    int arr[10] = {6, 3, 8, 10, 16, 7, 5, 2, 9, 14};
    int key = 10;

    sumPair(arr, n, key);
}