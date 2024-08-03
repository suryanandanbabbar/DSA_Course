#include <iostream>
using namespace std;

struct Matrix
{
    int A[10];
    int n; // Dimension
};

void set(struct Matrix *m, int i, int j, int x)
{
    if (i == j)
    {
        m->A[i - 1] = x; // or m->A[j - 1] = x
    }
}

int get(struct Matrix *m, int i, int j)
{
    if (i == j)
    {
        return m->A[i - 1]; // or A[j - 1]
    }
    else
    {
        return 0; // rest elements are ZERO
    }
}

void display(struct Matrix m)
{
    int i, j;
    for (i = 0; i < m.n; i++)
    {
        for (j = 0; j < m.n; j++)
        {
            if (i == j)
                cout << m.A[i - 1] << " ";
            else
                cout << 0 << " ";
        }
        cout << endl;
    }
}

int main()
{
    struct Matrix m;
    m.n = 4;
    set(&m, 1, 1, 5);
    set(&m, 2, 2, 8);
    set(&m, 3, 3, 9);
    set(&m, 4, 4, 12);

    cout << get(&m, 2, 2) << endl;

    display(m);
}