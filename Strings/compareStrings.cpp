#include <iostream>
using namespace std;

int main()
{
    char A[] = "Painter";
    char B[] = "Painter";

    int i, j;
    for (i = 0, j = 0; A[i] != '\0', B[i] != '\0'; i++, j++)
    {
        if (A[i] != B[j])
            break;
    }

    if (A[i] == B[j])
        cout << "Equal" << endl;
    else if (A[i] > B[j])
        cout << "A is greater than B" << endl;
    else
        cout << "A is smaller than B" << endl;
}