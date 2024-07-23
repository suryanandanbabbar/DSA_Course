#include <iostream>
using namespace std;

void TOH(int n, int a, int b, int c)
{
    int steps = 0;
    if (n > 0)
    {
        TOH((n - 1), a, c, b);
        cout << "from " << a << " to " << c << endl;
        TOH((n - 1), b, a, c);
    }
    printf("Steps: %d\n", steps);
}

int main()
{
    TOH(4, 1, 2, 3);
}