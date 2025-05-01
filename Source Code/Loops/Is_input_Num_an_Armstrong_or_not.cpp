#include <iostream>
#include <cmath> // to access pow(_______, _______) func

using namespace std;

int main() {
    int num, temp, power = 0, sum = 0;
    cin >> num;
    temp = num; // just save num's value temporarily

    // Calculate the power count (number of digits)
    while (num != 0) {
        power++;
        num /= 10;
    }
    num = temp; // Restore original number

    // Calculate the sum of each digit raised to the power
    while (num != 0) {
        int lastDigit = num % 10;
        sum += pow(lastDigit, power); // the func gives lastDigit raised to power
        num /= 10;
    }
    num = temp;

    // Check if the number is an Armstrong number
    if (sum == temp) // Compare sum to the original number
        cout << temp << " is an Armstrong number." << endl;
    else
        cout << temp << " is not an Armstrong number." << endl;

    return 0;
}