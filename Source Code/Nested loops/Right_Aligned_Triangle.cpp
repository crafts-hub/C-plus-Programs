#include <iostream>
using namespace std;

int main() {
    int n = 5; // Height of the triangle
    for (int i = 1; i <= n; i++) 
    {
        for (int j = n; j > i; j--) // for other programs, I did "<=" or ">=". But in this one, I did ">" only, the reason is: if (n = 5) then I want to put 4 spaces and then one star
        {
            cout << " ";  // Printing spaces for right alignment
        }
        for (int j = 1; j <= i; j++) 
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
