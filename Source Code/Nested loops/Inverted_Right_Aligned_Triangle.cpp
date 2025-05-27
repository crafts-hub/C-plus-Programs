#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) 
    { 
        for (int j = 1; j < i; j++) // As it is right aligned, I did "<" for printing spaces first, as we dont need to print any space for first iteration, so with the condition, it will skip space for 1st iteration
        {
            cout << " "; // Print Spaces first then stars
        }

        for (int j = n; j >= i ; j--) 
        {
            cout << "*";
        }

        cout << endl;
    }
    return 0;
}
