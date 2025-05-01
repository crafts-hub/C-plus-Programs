#include <iostream>
using namespace std;

int main() {

    int arr[5];
    int smallest = 0;

    // Taking input elements in array
    cout << "Enter 6 elements: ";
    for (int i = 0; i < 6; i++) {
        cin >> arr[i];
    }

    smallest = arr[0]; // Assume the first element is the smallest and then we will check each element

    // Traverse the array to find the smallest element
    for (int i = 1; i < 6; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    cout << "The smallest number in the array is: " << smallest << endl;

    return 0;
}
