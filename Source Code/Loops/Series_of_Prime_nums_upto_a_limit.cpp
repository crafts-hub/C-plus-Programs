#include <iostream>
using namespace std;

int main() {
    int limitNum;
    cout << "Give a limit (0 and 1 excluded): " << endl;
    cin >> limitNum;

    for (int i = 2; i <= limitNum; i++) // I m checking if 'i' is prime or not
    {
        int isPrime = 1;

        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
            cout << i << ", ";
    }

    cout << endl;
    return 0;
}