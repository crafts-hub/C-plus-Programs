#include <iostream>
using namespace std;

int absolute(int num) {
    if (num < 0)
        return -num; // Make it positive
    else
        return num;  // Already positive
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    cout << "Absolute value is: " << absolute(number) << endl;

    return 0;
}
