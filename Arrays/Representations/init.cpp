#include <iostream>
using namespace std;

int main() {
    
    // Different ways of declaring arrays
    int A[5];
    int B[5] = {2,4,6,8,9};
    int C[10] = {2,4,6};
    int D[5] = {0};
    int E[] = {1,2,3,4,5,6};

    // Traversing through an array
    for (int i = 0; i < 5; i++) {
        cout << B[i] << endl;
    }

    return 0; 
}