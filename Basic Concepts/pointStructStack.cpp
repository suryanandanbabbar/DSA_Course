#include <iostream>

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    // We can omit "struct" here (only in C++)
    struct Rectangle r = {10, 5};

    // Pointer to Structure
    // Store in Stack
    Rectangle *p = &r;

    // Normal Way
    r.length = 15;

    // Using Pointer
    (*p).length = 16;
    // Or, better
    p->length = 17;

    std::cout << p->length << std::endl; // 17
}