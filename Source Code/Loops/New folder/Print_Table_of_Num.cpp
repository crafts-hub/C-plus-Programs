#include <iostream>
using namespace std;

void CalculateTable(int my_num) {
    for (int i = 1; i <= 10; i++)
    {
        cout << my_num << " X " << i << " = " << (my_num * i) << endl;
    }
}

int main() {
    int num;
    cout << "Give any number" << endl;
    cin >> num;
    
    CalculateTable(num);
    return 0;
}