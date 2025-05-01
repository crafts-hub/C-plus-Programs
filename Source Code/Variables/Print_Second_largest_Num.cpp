#include <iostream>
using namespace std;

// As I have made the function bellow main() function, so i have to Declare it like:
int findSecondLargest(int a, int b, int c);


int main() {
    int num1, num2, num3, secondLargestNum;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    secondLargestNum = findSecondLargest(num1, num2, num3);

    cout << "The second largest number is: " <<  secondLargestNum  << endl;

    return 0;
}

int findSecondLargest(int a, int b, int c) {

    if (a > b && a > c || a > c && a < b) 
    {
        return a;
    } 
    else if (b > a && b > c || b > c && b < a) 
    {
        return b;
    } 
    else 
    {
        return c;
    }
}
