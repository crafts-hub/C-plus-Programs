#include <iostream>
using namespace std;

int main() {

    int arr[6];  // Array size is 6 as per the input request
    int evenCount = 0, oddCount = 0;

    // Taking input elements in array
    cout << "Enter 6 elements: ";
    for (int i = 0; i < 6; i++) 
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 6; i++) 
    {
        if (arr[i] % 2 == 0)
        {  // Check if the number is even
            evenCount++;
        } else 
        {  // Otherwise, it's odd
            oddCount++;
        }
    }

    // Output the counts of even and odd numbers
    cout << "Even numbers count: " << evenCount << endl;
    cout << "Odd numbers count: " << oddCount << endl;

    return 0;
}
