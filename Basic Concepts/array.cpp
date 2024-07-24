// Basics of Arrays
#include <iostream>

int main()
{
    // Size of Array
    int n;
    std::cout << "Enter Size: ";
    std::cin >> n;

    // Declaring Array
    int A[n];

    // Initialsing Array
    A[0] = 1;
    A[1] = 2;

    for (int x : A)
    {
        std::cout << x << std::endl;
    }

    return 0;
}