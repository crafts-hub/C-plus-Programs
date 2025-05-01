#include <iostream>
using namespace std;

int main() {
    int my_num, rev = 0;
    cout << "Please enter a number! \n";
    cin >> my_num;
    cout << "Your number is: --- " << my_num << "\n Thank you! :) \n";

    while(my_num > 0)  {
        int lastDigit = my_num % 10;
        rev = rev * 10 + lastDigit;
        my_num /= 10;
    }

    cout << "The reversed num is: --- " << rev<< endl;
    return 0;
}
