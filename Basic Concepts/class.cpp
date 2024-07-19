// Basics of Class
#include <iostream>
using namespace std;

class Rectangle {
    private:
        int length;
        int breadth;
    public:
        // Default Constructor
        Rectangle() {length = breadth = 0;}
        Rectangle(int l, int b);

        // Facilitators
        int area();
        int perimeter();

        // Accessor
        int getLength() { return length;}

        // Mutator (Setter)
        void setLength(int l) {length = l;}

        // Destructor
        ~Rectangle() {cout << "Destructor";}
};

// Scope Resolution
Rectangle::Rectangle(int l, int b){
    length = l;
    breadth = b;
}

int Rectangle::area() {
    return length * breadth;
}
int Rectangle::perimeter() {
    return 2 * (length + breadth);
}


int main() {
    Rectangle r (10, 5);

    cout << "Area: " << r.area() << endl;;
    cout << "Perimeter: " << r.perimeter() << endl;;
    r.setLength(20);
    cout << "Updated Length: " << r.getLength() << endl;

}