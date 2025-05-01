#include <iostream>
using namespace std;

int main() {

    int arr[6];  // Array size is 6 as per the input request
    int sum = 0;

    // Taking input elements in array
    cout << "Enter 6 elements: ";
    for (int i = 0; i < 6; i++) 
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 6; i++) 
    {
        sum += arr[i];  // Add each element to sum
    }

    cout << "The sum of all elements in the array is: " << sum << endl;

    return 0;
}
