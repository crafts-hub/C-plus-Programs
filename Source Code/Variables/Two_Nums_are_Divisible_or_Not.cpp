#include <iostream>
using namespace std;

void checkDivisibility(int a, int b) {
    int rem = a % b;  // Get remainder

    if (rem == 0) {
        cout << a << " is divisible by " << b << endl;  // No remainder, divisible
    } else {
        cout << a << " is NOT divisible by " << b << ", remainder is " << rem << endl;  // Remainder present
    }
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    checkDivisibility(num1, num2);

    return 0;
}
