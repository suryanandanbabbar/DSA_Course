/* contd. from structFunc
Better way to code in C++
 */
#include <iostream>

class Rectangle
{
private:
    int length;
    int breadth;
public:
    // void initialise(int l, int b)
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    int area()
    {
        return length * breadth;
    }

    void changeLength(int l)
    {
        length = l;
    }
};
int main()
{
    // Rectangle r; // Object 'r' created
    Rectangle r(10, 5);

    // r.initialise(10, 5);
    r.area();
    r.changeLength(20);
}