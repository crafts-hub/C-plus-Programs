#include <iostream>
using namespace std;

int main() {

    int arr[5];
    int largest = 0;

    // Taking input elements in array
    cout << "Enter 6 elements: ";
    for (int i = 0; i < 6; i++) {
        cin >> arr[i];
    }

    largest = arr[0]; // Assume the first element is the largest and then we will check each element

    // Traverse the array to find the largest element
    for (int i = 1; i < 6; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    cout << "The largest number in the array is: " << largest << endl;

    return 0;
}
