#include <iostream>
using namespace std;

int main() {
    int sum = 0;

    for (int i = 1; i <= 100; i++) {
        int remainder = i % 2;
        if (remainder == 0) 
            continue; // if num is even, skip it
        sum += i;
    }

    cout<<"the num is: "<< sum;
    return 0;
}
