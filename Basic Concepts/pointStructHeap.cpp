#include <iostream>

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    Rectangle *p;

    // Store in Heap
    // The C way:
    // p = (struct Rectangle *)malloc(sizeof(struct Rectangle));

    // The C++ way:
    p = new Rectangle;

    p->length = 15;
    p->breadth = 20;

    std::cout << p->length << std::endl; // 15
    std::cout << p->breadth << std::endl; // 20
}