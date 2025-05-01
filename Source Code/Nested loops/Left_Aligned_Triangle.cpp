#include <iostream>
using namespace std;

int main() {
    int n = 5; // Height of the triangle
    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= i; j++) 
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
