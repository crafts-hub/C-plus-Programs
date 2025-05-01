#include <iostream>
using namespace std;

int Calculate_Factorial(int my_num, int fac) // custom method
{
    if (my_num < 0) {
        cout << "Factorial is not defined for negative numbers" << endl;
        return 0;
    } else {
        for (int i = 1; i <= my_num; ++i) {
            fac = fac * i;
        }
        return fac;
    }
}

int main() {
    int num, factorial = 1;
    cout << "Enter a positive integer: " << endl;
    cin >> num;

    int myFactorial = Calculate_Factorial(num, factorial);
    cout << "Factorial is: 👉 " << myFactorial << endl;
    return 0;
}
