#include <iostream>
using namespace std;

int main() {

    int num, sum = 0;
    cout << "Enter a number." << endl;
    cin >> num;

    for(int i = 1; i <= num/2; i++) {
        if (num % i == 0){
            sum += i;
        }
    }

    if(sum == num)
        cout<< "Perfect: " << sum;
    else
        cout<< "Not Perfect: ";

    return 0;
}