/* This code just demonstrates the best style of coding
in C language */
#include <iostream>

struct Rectangle {
    int length;
    int breadth;
};

void initialise(struct Rectangle *r, int l, int b) {
    r->length = l;
    r->breadth = b;
}

int area(struct Rectangle r) {
    return r.length * r.breadth;
}

void changeLength(struct Rectangle *r, int l) {
    r->length = l;
}

int main() {
    struct Rectangle r;
    
    initialise(&r, 10, 5);
    area(r);
    changeLength(&r, 20);
}