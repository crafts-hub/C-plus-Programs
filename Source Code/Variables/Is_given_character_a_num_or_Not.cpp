#include <iostream>
#include <cctype> // For isdigit() function
using namespace std;

void checkIfDigit(char ch) {
    if (ch >= '0' && ch <= '9')
    {
        cout << ch << " is a digit." << endl;
    } else 
    {
        cout << ch << " is not a digit." << endl;
    }
}

int main() {
    char character;
    cout << "Enter a character: ";
    cin >> character;

    checkIfDigit(character);

    return 0;
}
