#include <iostream>
using namespace std;

template <class T>
class Array
{
private:
    T *A;
    int size;
    int length;

public:
    Array()
    {
        size = 10;
        A = new T[10];
        length = 0;
    }
    Array(int sz)
    {
        size = sz;
        length = 0;
        A = new T[size];
    }
    ~Array()
    {
        delete[] A;
    }

    void displayArray();
    void insertion(int index, T x);
    T deletion(int index);
};

template <class T>
void Array<T>::displayArray()
{
    for (int i = 0; i < length; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

template <class T>
void Array<T>::insertion(int index, T x)
{
    if (index >= 0 && index <= length)
    {
        for (int i = length; i > index; i--)
        {
            A[i] = A[i - 1];
        }
        A[index] = x;
        length++;
    }
}

template <class T>
T Array<T>::deletion(int index)
{
    T x = 0;
    if (index >= 0 && index <= length - 1)
    {
        x = A[index];
        for (int i = index; i < length - 1; i++)
        {
            A[i] = A[i + 1];
        }
        length--;
        return x;
    }
    return 0;
}

int main()
{
    Array<int> arr(10);
    arr.insertion(0, 5);
    arr.insertion(1, 6);
    arr.insertion(2, 7);
    arr.insertion(3, 8);

    arr.displayArray(); // 5 6 7 8

    cout << arr.deletion(1) << endl; // 6

    arr.displayArray(); // 5 7 8
}