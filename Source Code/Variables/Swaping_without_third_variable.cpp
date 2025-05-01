#include <iostream>
using namespace std;

int main() {
    int a = 7, b = 9;

//---- Swapping without a third variable

    a = a + b;  // a = 7 + 9 = 16
    b = a - b;  // b = 16 - 9 = 7
    a = a - b;  // a = 16 - 7 = 9

    cout << "After swapping: " << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}