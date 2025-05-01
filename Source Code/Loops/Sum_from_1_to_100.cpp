#include <iostream>
using namespace std;

int Calculate_Sum(int start, int end) {
    int sum = 0;
    for (int i = start; i <= end; ++i) {
        sum += i;
    }
    return sum;
}

int main() {
    int start = 1, end = 100;

    int result = Calculate_Sum(start, end);
    cout << "Sum of numbers from 1 to 100 is: 👉 " << result << endl;

    return 0;
}
