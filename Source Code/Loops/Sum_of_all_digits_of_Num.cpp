#include <iostream>
using namespace std;

int Sum_Of_Digits(int num) {
    int sum = 0;
    
    if (num < 0) {
        cout << "Please enter a non-negative number" << endl;
        return 0;
    } else {
        while (num > 0) {
            int digit = num % 10; // get last digit
            sum += digit;         // add to sum
            num = num / 10;       // remove last digit
        }
        return sum;
    }
}
int main() {
    int number;
    cout << "Enter a positive integer: " << endl;
    cin >> number;

    int result = Sum_Of_Digits(number);
    cout << "Sum of digits is: 👉 " << result << endl;

    return 0;
}
