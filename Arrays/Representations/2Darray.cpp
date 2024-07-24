#include <iostream>
using namespace std;

int main()
{
    int i, j;

    // 2D Array
    int A[3][4] = {{1, 2, 3, 4}, {2, 4, 6, 8}, {3, 5, 7, 9}};

    // Array of pointers
    int *B[3]; // In Stack

    printf("Array A: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    B[0] = new int[4]; // In Heap
    B[1] = new int[4]; // In Heap
    B[2] = new int[4]; // In Heap

    printf("Array B: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    // Double Pointer
    int **C;
    C = new int *[3];  // In Heap
    C[0] = new int[4]; // In Heap
    C[1] = new int[4]; // In Heap
    C[2] = new int[4]; // In Heap

    printf("Array C: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

}