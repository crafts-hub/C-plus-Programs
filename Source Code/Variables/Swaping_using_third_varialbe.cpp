#include <iostream>
using namespace std;

int main() {
    int a = 7, b = 9, temp;  
// swapping ka matbal hai "a = 9" ki value "b = 7" ho jay 

    temp = a; // yahan per "a" ki value "temp" mein store ho gai hai ta ke is ko agay use kar sakein
    a = b;    // finally ab "a" mein "b" store kar sakty hain
    b = temp; // ab hum ne "b" mein "a" ki value store kar rehe hain. 
              //"a" ki value is liye hum ne temp mein store ki thi

    cout << "After swapping: " << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
