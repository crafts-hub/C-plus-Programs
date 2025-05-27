<h2 align="center">Table of Content</h2>


### [Variables](#variables-1)
- [Question 1](#question-1) 👉 swap two numbers without a third variable
- [Question 2](#question-2) 👉 swap two numbers using a third variable
- [Question 3](#question-3) 👉 find absolute value of an input number
- [Question 4](#question-4) 👉 check if one number is divisible by another
- [Question 5](#question-5) 👉 check if the input character is a digit or not
- [Question 6](#question-6) 👉 second largest number among three numbers

### [Loops](#loops-1)
- [Question 7](#question-7) 👉 calculates sum of numbers from start to end
- [Question 8](#question-8) 👉 calculates sum of all even numbers from 1 to 100
- [Question 9](#question-9) 👉 calculates sum of all odd numbers from 1 to 100
- [Question 10](#question-10) 👉 multiplication table of a given number
- [Question 11](#question-11) 👉 calculates factorial of a given number
- [Question 12](#question-12) 👉 reverses the given number
- [Question 13](#question-13) 👉 calculates sum of the digits of a given number
- [Question 14](#question-14) 👉 check if a given number is a perfect number
- [Question 15](#question-15) 👉 find all prime numbers up to a given limit
- [Question 16](#question-16) 👉 check if a given number is an Armstrong number

### [Nested Loops](#nested-loops-1)
- [Question 17](#question-17) 👉 print a right-angled triangle
- [Question 18](#question-18) 👉 print a right-angled triangle with right alignment
- [Question 19](#question-19) 👉 print an inverted right-angled triangle
- [Question 20](#question-20) 👉 print an inverted right-angled triangle with left alignment

### [Array](#array-1)
- [Question 21](#question-21) 👉 calculate the sum of all elements in an array
- [Question 22](#question-22) 👉 find the largest number in an array
- [Question 23](#question-23) 👉 find the smallest number in an array
- [Question 24](#question-24) 👉 count even and odd numbers in an array

### [Sequences](#sequences-1)
- [Formulas](#quick-revision-ap-gp-and-hp-formulas)
- [Question 25](#question-25) 👉 Print AP upto n like: 1, 4, 7, ....
- [Question 26](#question-26) 👉 Print GP upto n like: 5, 15, 45, ...
- [Question 27](#question-27) 👉 Print HP upto n like: 1/1, 1/4, 1/7, ...
- [Question 28](#question-28) 👉 print sum of AP
- [Question 29](#question-29) 👉 print sum of GP




<p align="right">
  <img src="Source Code/z-Assets/LOGO PNG_02.png" alt="logo" width="16" style="vertical-align: middle; margin-right: 4px;" />
  <span style="font-size: 2px;">Jameel499</span>
</p>


---








<h2 align="center">Variables</h2>

### **Question 1:**
#### Write a program to swap two numbers **without** using a third variable.

### Program
```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 7, b = 9;

    //---- Swapping without a third variable
    a = a + b;  // a = 7 + 9 = 16
    b = a - b;  // b = 16 - 9 = 7
    a = a - b;  // a = 16 - 7 = 9

    cout << "After swapping: " << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
```

### Output
```
After swapping: 
a = 9, b = 7
```

### Explanation
- The program swaps the values of `a` and `b` without using a third variable. 
- The values are swapped using mathematical operations: addition and subtraction.

---

### **Question 2:**
#### Write a program to swap two numbers **using a third variable**.

### Program
```cpp
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
```

### Output
```
After swapping: 
a = 9, b = 7
```

### Explanation
- This program uses a third variable (`temp`) to swap the values of `a` and `b`.
- The value of `a` is first stored in `temp`, then `b` is assigned to `a`, and finally, `temp` (which holds the original value of `a`) is assigned to `b`.

---

### **Question 3:**
#### Write a program to find the absolute value of an input number.

### Program
```cpp
#include <iostream>
using namespace std;

int absolute(int num) {
    if (num < 0)
        return -num; // Make it positive
    else
        return num;  // Already positive
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    cout << "Absolute value is: " << absolute(number) << endl;

    return 0;
}
```

### Output
```
Enter a number: 
-5
Absolute value is: 5
```

### Explanation
- The program defines a function `absolute()` that returns the absolute value of a number.
- If the input number is negative, it returns its positive equivalent, otherwise, it returns the number itself.

---

### **Question 4:**
#### Write a program to check if one number is divisible by another.

### Program
```cpp
#include <iostream>
using namespace std;

void checkDivisibility(int a, int b) {
    int rem = a % b;  // Get remainder

    if (rem == 0) {
        cout << a << " is divisible by " << b << endl;  // No remainder, divisible
    } else {
        cout << a << " is NOT divisible by " << b << ", remainder is " << rem << endl;  // Remainder present
    }
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    checkDivisibility(num1, num2);

    return 0;
}
```

### Output
```
Enter two numbers: 
10 2
10 is divisible by 2
```

### Explanation
- The program checks if the first number (`a`) is divisible by the second number (`b`) by calculating the remainder.
- If the remainder is `0`, it means the first number is divisible by the second number.

---

### **Question 5:**
#### Write a program to check if the input character is a digit or not.

### Program
```cpp
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
```

### Output
```
Enter a character: 
5
5 is a digit.
```

### Explanation
- The program checks whether the input character is a digit by comparing its value to the ASCII values of the digits '0' to '9'.
- If it falls within this range, it is considered a digit.

---

### **Question 6:**
#### Write a program to find the second largest number among three numbers.

### Program
```cpp
#include <iostream>
using namespace std;

// As I have made the function below main() function, so I have to Declare it like:
int findSecondLargest(int a, int b, int c);

int main() {
    int num1, num2, num3, secondLargestNum;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    secondLargestNum = findSecondLargest(num1, num2, num3);

    cout << "The second largest number is: " << secondLargestNum << endl;

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
```

### Output
```
Enter three numbers: 
3 6 9
The second largest number is: 6
```

### Explanation
- The program compares three numbers to find the second largest.
- The function `findSecondLargest()` uses conditional statements to determine which number is the second largest.

---



<h2 align="center">Loops</h2>


### **Question 7:**
#### Write a program that calculates the sum of numbers from `start` to `end`.

### Program
```cpp
#include <iostream>
using namespace std;

int Calculate_Sum(int start, int end) {
    int sum = 0;
    for (int i = start; i <= end; ++i) {
        sum += i;
    }
    return sum;
}

int main() {
    int start = 1, end = 100;

    int result = Calculate_Sum(start, end);
    cout << "Sum of numbers from 1 to 100 is: 👉 " << result << endl;

    return 0;
}
```

### Output
```
Sum of numbers from 1 to 100 is: 👉 5050
```

### Explanation
- The program calculates the sum of all integers from `1` to `100` using a loop.
- The result of the sum is displayed.

---

### **Question 8:**
#### Write a program that calculates the sum of all even numbers from 1 to 100.

### Program
```cpp
#include <iostream>
using namespace std;

int main() {
    int sum = 0;

    for (int i = 1; i <= 100; i++) {
        int remainder = i % 2;
        if (remainder == 0) 
            sum += i;
    }

    cout << "The sum of even numbers is: " << sum;
    return 0;
}
```

### Output
```
The sum of even numbers is: 2550
```

### Explanation
- The program calculates the sum of even numbers from `1` to `100` by checking if the number is divisible by 2 using the modulo operator (`%`).
- The sum of the even numbers is displayed.

---

### **Question 9:**
#### Write a program that calculates the sum of all odd numbers from 1 to 100.

### Program
```cpp
#include <iostream>
using namespace std;

int main() {
    int sum = 0;

    for (int i = 1; i <= 100; i++) {
        int remainder = i % 2;
        if (remainder == 0) 
            continue; // if num is even, skip it
        sum += i;
    }

    cout << "The sum of odd numbers is: " << sum;
    return 0;
}
```

### Output
```
The sum of odd numbers is: 2500
```

### Explanation
- The program calculates the sum of odd numbers from `1` to `100` by skipping even numbers using the `continue` statement and adding the odd numbers.
- The sum of the odd numbers is displayed.

---

### **Question 10:**
#### Write a program that generates the multiplication table of a given number.

### Program
```cpp
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
```

### Output
```
Give any number
5
5 X 1 = 5
5 X 2 = 10
5 X 3 = 15
5 X 4 = 20
5 X 5 = 25
5 X 6 = 30
5 X 7 = 35
5 X 8 = 40
5 X 9 = 45
5 X 10 = 50
```

### Explanation
- The program takes an integer input and prints its multiplication table from `1` to `10`.
- The table is displayed for the number entered.

---

### **Question 11:**
#### Write a program that calculates the factorial of a given number.

### Program
```cpp
#include <iostream>
using namespace std;

int Calculate_Factorial(int my_num, int fac) // custom method
{
    if (my_num < 0) {
        cout << "Factorial is not defined for negative numbers" << endl;
        return 0;
    } else {
        for (int i = 1; i <= my_num; ++i) {
            fac = fac * i;
        }
        return fac;
    }
}

int main() {
    int num, factorial = 1;
    cout << "Enter a positive integer: " << endl;
    cin >> num;

    int myFactorial = Calculate_Factorial(num, factorial);
    cout << "Factorial is: 👉 " << myFactorial << endl;
    return 0;
}
```

### Output
```
Enter a positive integer: 
5
Factorial is: 👉 120
```

### Explanation
- The program calculates the factorial of a number using a custom function.
- It multiplies all integers from `1` to `num` and returns the result.

---

### **Question 12:**
#### Write a program that reverses a given number.

### Program
```cpp
#include <iostream>
using namespace std;

int main() {
    int my_num, rev = 0;
    cout << "Please enter a number! \n";
    cin >> my_num;
    cout << "Your number is: --- " << my_num << "\n Thank you! :) \n";

    while (my_num > 0) {
        int lastDigit = my_num % 10;
        rev = rev * 10 + lastDigit;
        my_num /= 10;
    }

    cout << "The reversed num is: --- " << rev << endl;
    return 0;
}
```

### Output
```
Please enter a number! 
12345
Your number is: --- 12345
Thank you! :) 
The reversed num is: --- 54321
```

### Explanation
- The program reverses the digits of a number using a `while` loop.
- It extracts each digit from the end of the number, and constructs the reversed number.

---

### **Question 13:**
#### Write a program that calculates the sum of the digits of a given number.

### Program
```cpp
#include <iostream>
using namespace std;

int Sum_Of_Digits(int num) {
    int sum = 0;
    
    if (num < 0) {
        cout << "Please enter a non-negative number" << endl;
        return 0;
    } else {
        while (num > 0) {
            int digit = num % 10; // get last digit
            sum += digit;         // add to sum
            num = num / 10;       // remove last digit
        }
        return sum;
    }
}

int main() {
    int number;
    cout << "Enter a positive integer: " << endl;
    cin >> number;

    int result = Sum_Of_Digits(number);
    cout << "Sum of digits is: 👉 " << result << endl;

    return 0;
}
```

### Output
```
Enter a positive integer: 
12345
Sum of digits is: 👉 15
```

### Explanation
- The program calculates the sum of the digits of a given number.
- It iterates through each digit of the number and adds it to the sum, then displays the result.

---

### **Question 14:**
#### Write a program to check if a given number is a perfect number.

### Program
```cpp
#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
    cout << "Enter a number." << endl;
    cin >> num;

    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (sum == num)
        cout << "Perfect: " << sum;
    else
        cout << "Not Perfect: ";

    return 0;
}
```

### Output
```
Enter a number.
6
Perfect: 6
```

### Explanation
- The program checks if the sum of the divisors (excluding the number itself) of a number equals the number. If true, it is a perfect number.

---

### **Question 15:**
#### Write a program to find all prime numbers up to a given limit.

### Program
```cpp
#include <iostream>
using namespace std;

int main() {
    int limitNum;
    cout << "Give a limit (0 and 1 excluded): " << endl;
    cin >> limitNum;

    for (int i = 2; i <= limitNum; i++) { // I m checking if 'i' is prime or not
        int isPrime = 1;

        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
            cout << i << ", ";
    }

    cout << endl;
    return 0;
}
```

### Output
```
Give a limit (0 and 1 excluded): 
20
2, 3, 5, 7, 11, 13, 17, 19, 
```

### Explanation
- The program prints all prime numbers from `2` up to a given limit.
- It checks each number if it has any divisors other than `1` and itself. If it does not, it's a prime number.

---

### **Question 16:**
#### Write a program to check if a given number is an Armstrong number.

### Program
```cpp
#include <iostream>
#include <cmath> // to access pow(_______, _______) func

using namespace std;

int main() {
    int num, temp, power = 0, sum = 0;
    cin >> num;
    temp = num; // just save num's value temporarily

    // Calculate the power count (number of digits)
    while (num != 0) {
        power++;
        num /= 10;
    }
    num = temp; // Restore original number

    // Calculate the sum of each digit raised to the power
    while (num != 0) {
        int lastDigit = num % 10;
        sum += pow(lastDigit, power); // the func gives lastDigit raised to power
        num /= 10;
    }
    num = temp;

    // Check if the number is an Armstrong number
    if (sum == temp) // Compare sum to the original number
        cout << temp << " is an Armstrong number." << endl;
    else
        cout << temp << " is not an Armstrong number." << endl;

    return 0;
}
```

### Output
```
153
153 is an Armstrong number.
```

### Explanation
- The program checks if a number is an Armstrong number, which is a number that is equal to the sum of its own digits each raised to the power of the number of digits.
- It calculates the sum of the digits raised to the power of the number of digits and compares it with the original number.

---

<h2 align="center">Nested Loops</h2>


### **Question 17:**
#### Write a program to print a right-angled triangle of stars.

### Program
```cpp
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
```

### Output
```
*
**
***
****
*****
```

### Explanation
- The program prints a right-angled triangle of stars where the number of stars increases with each row.
- The outer loop controls the number of rows, and the inner loop prints stars in each row.

---

### **Question 18:**
#### Write a program to print a right-angled triangle of stars with right alignment.

### Program
```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 5; // Height of the triangle
    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= n - i; j++) 
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
```

### Output
```
    *
   **
  ***
 ****
*****
```

### Explanation
- The program prints a right-angled triangle of stars, but it is right-aligned. The outer loop controls the number of rows, while the inner loops handle the spaces and stars in each row.
- The first inner loop prints spaces, and the second inner loop prints stars.

---

### **Question 19:**
#### Write a program to print an inverted right-angled triangle of stars.

### Program
```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--) 
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
```

### Output
```
*****
****
***
**
*
```

### Explanation
- The program prints an inverted right-angled triangle of stars where the number of stars decreases with each row.
- The outer loop controls the number of rows, and the inner loop prints stars in each row, starting from the maximum number of stars in the first row.

---

### **Question 20:**
#### Write a program to print an inverted right-angled triangle of stars with left alignment.

### Program
```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j < i; j++) 
        {
            cout << " "; // Print Spaces first then stars
        }

        for (int j = 1; j <= n - i + 1; j++) 
        {
            cout << "*";
        }

        cout << endl;
    }
    return 0;
}
```

### Output
```
*****
 ****
  ***
   **
    *
```

### Explanation
- The program prints an inverted right-angled triangle of stars, with left alignment. 
- The outer loop controls the number of rows, while the inner loops print spaces and stars in each row.
- The first inner loop prints spaces, and the second inner loop prints stars.

---









<h2 align="center">Array</h2>








### **Question 21:**
#### Write a program to calculate the sum of all elements in an array.

### Program
```cpp
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
```

### Output
```
Enter 6 elements: 
2 4 6 8 10 12
The sum of all elements in the array is: 42
```

### Explanation
- The program takes 6 elements as input into an array.
- It calculates the sum of all elements by iterating over the array and adding each element to the `sum` variable.

---

### **Question 22:**
#### Write a program to find the largest number in an array.

### Program
```cpp
#include <iostream>
using namespace std;

int main() {

    int arr[5];
    int largest = 0;

    // Taking input elements in array
    cout << "Enter 6 elements: ";
    for (int i = 0; i < 6; i++) {
        cin >> arr[i];
    }

    largest = arr[0]; // Assume the first element is the largest and then we will check each element

    // Traverse the array to find the largest element
    for (int i = 1; i < 6; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    cout << "The largest number in the array is: " << largest << endl;

    return 0;
}
```

### Output
```
Enter 6 elements: 
2 14 6 87 10 12
The largest number in the array is: 87
```

### Explanation
- The program initializes the first element as the largest number, then traverses the array to check if there is a larger number.
- It updates the `largest` variable whenever it finds a larger element.

---

### **Question 23:**
#### Write a program to find the smallest number in an array.

### Program
```cpp
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
```

### Output
```
Enter 6 elements: 
52 4 16 8 10 12
The smallest number in the array is: 4
```

### Explanation
- The program initializes the first element as the smallest number, then traverses the array to check if there is a smaller number.
- It updates the `smallest` variable whenever it finds a smaller element.

---

### **Question 24:**
#### Write a program to count even and odd numbers in an array.

### Program
```cpp
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
```

### Output
```
Enter 6 elements: 
2 3 4 5 6 7 8
Even numbers count: 4
Odd numbers count: 3
```

### Explanation
- The program counts the number of even and odd numbers in the array.
- It uses the modulus operator (`%`) to check whether a number is even or odd.

---










<h2 align="center">Sequences</h2>





### **Quick Revision: A.P., G.P., and H.P. Formulas**

| **Concept**                 | **Arithmetic Progression (A.P.)**                                                                       | **Geometric Progression (G.P.)**                                                                          | **Harmonic Progression (H.P.)**                                                                       |
| --------------------------- | ------------------------------------------------------------------------------------------------------- | --------------------------------------------------------------------------------------------------------- | ----------------------------------------------------------------------------------------------------- |
| **Definition**              | Difference between terms is constant.                                                                   | Each term is multiplied by a constant ratio.                                                              | Reciprocals of terms form an A.P.                                                                     |
| **n-th Term**               | $T_n = a + (n - 1) \cdot d$                                                                             | $T_n = a \cdot r^{n - 1}$                                                                                 | $T_n = \frac{1}{a + (n - 1) \cdot d}$                                                                 |
| **Sum of First n Terms**    | $S_n = \frac{n}{2} \cdot \left[2a + (n - 1) \cdot d\right]$<br>or<br> $S_n = \frac{n}{2} \cdot (a + l)$ | $S_n = \frac{a(1 - r^n)}{1 - r} \quad \text{for } r \neq 1$<br> $S_n = a \cdot n \quad \text{for } r = 1$ | No direct formula. Use:<br> $S_n = \sum_{k=0}^{n-1} \frac{1}{a + kd}$                                 |
| **First Term (a)**          | Given                                                                                                   | Given                                                                                                     | Reciprocal of the first term of corresponding A.P.                                                    |
| **Common Difference/Ratio** | $d = T_2 - T_1$                                                                                         | $r = \frac{T_2}{T_1}$                                                                                     | Same common difference **d** from related A.P.                                                        |
| **Nature**                  | Linear growth                                                                                           | Exponential growth                                                                                        | Hyperbolic decay                                                                                      |
| **Relation to Others**      | —                                                                                                       | —                                                                                                         | If A.P. is: $a, a+d, a+2d, \ldots$ then H.P. is: $\frac{1}{a}, \frac{1}{a+d}, \frac{1}{a+2d}, \ldots$ |

---

### **Examples Summary**

| **Progression** | **Example**               | **a** | **d / r** | **T₅**               | **Sum of 5 Terms (S₅)**                                                                      |
| --------------- | ------------------------- | ----- | --------- | -------------------- | -------------------------------------------------------------------------------------------- |
| A.P.            | 1, 4, 7, 10, 13           | 1     | 3         | $1 + 4 \cdot 3 = 13$ | $S_5 = \frac{5}{2} \cdot [2 + 4 \cdot 3] = 35$                                               |
| G.P.            | 5, 15, 45, 135, 405       | 5     | 3         | $5 \cdot 3^4 = 405$  | $S_5 = \frac{5(1 - 3^5)}{1 - 3} = 605$                                                       |
| H.P.            | 1/1, 1/4, 1/7, 1/10, 1/13 | 1     | 3         | $\frac{1}{13}$       | $S_5 = \frac{1}{1} + \frac{1}{4} + \frac{1}{7} + \frac{1}{10} + \frac{1}{13} \approx 1.6769$ |



---





### **Question 25:**

#### Write a program to print the Sequence: 1 4 7 10 ...



### **Identifying the Pattern**

```
1, 4, 7, 10, ...
```

This is an **Arithmetic Progression (A.P.)**, where:

* **First term (a) = 1**
* **Common difference (d) = 3**

Each term is formed by **adding 3 to the previous term**:

* 1 + 3 = 4
* 4 + 3 = 7
* 7 + 3 = 10
* and so on...



### **C++ Program to Print First `n` Terms of A.P.**

```cpp
#include <iostream>
using namespace std;

int main() {

    int firstTerm = 1;
    int numberOfTerms;
    int commonDiff = 3; // as 4-1 = 3

    cout<< "Give number of terms you want to print: "<< endl;
    cin>> numberOfTerms;

    int currentTerm = firstTerm; // We will print series from first term onwards. 

    for(int i = 1; i <= numberOfTerms; i++) // "i" defines how many times this loop will execute.... in our case it will execute up to "numberOfTerms"
    {
        cout << currentTerm << " ";
        currentTerm = currentTerm + commonDiff; // after each iteration, we will get next term by adding common difference to current term like, "1 + 3 = 4", "4 + 3 = 7", "7 + 3 = 10", and so on...
    }

    return 0;
}
```



### **Example:**

**Input:**

```
Give number of terms you want to print:
5
```

**Output:**

```
1 4 7 10 13
```









---

### **Question 26:**

#### Write a program to print the series: 5 15 45 ...

### **Identifying the Pattern**

```
5, 15, 45, ...
```

This is a **Geometric Progression (G.P.)**, not an arithmetic progression.

Each term is multiplied by **3**:

* 5 × 3 = 15
* 15 × 3 = 45
* and so on...

So this is a **geometric sequence** with:

* **First term (a) = 5**
* **Common ratio (r) = 3**


### **C++ Program to Print First `n` Terms**

```cpp
#include <iostream>
using namespace std;

int main() {
    // this pattern is same as shown in Question 25

    int a = 5;           // First term
    int r = 3;           // Common ratio... as ratio of two consecutive terms is: "15 / 5 = 3" also "45 / 15 = 3" and so on...
    int n;               // Number of terms

    cout << "Enter number of terms: ";
    cin >> n;

    int currentTerm = a;

    for (int i = 0; i < n; i++) {
        cout << currentTerm << " ";
        currentTerm = currentTerm * r;  // after each iteration, we will get next term by multiplying common ratio to current term like, "5 * 3 = 15", "15 * 3 = 45", "45 * 3 = 135" and so on...
    }

    return 0;
}
```


### **Example:**

**Input:**

```
Enter number of terms: 5
```

**Output:**

```
5 15 45 135 405
```

---






### **Question 27:**

#### Write a program to print the Sequence: 1/1, 1/4, 1/7, 1/10, ...


### **What is Harmonic Progression (HP)?**

A **Harmonic Progression (H.P.)** is a sequence where the **reciprocals** of the terms form an **Arithmetic Progression (A.P.)**.



### **Understanding with an Example:**

If the A.P. is:

```
1, 1.5, 2, 2.5, ...
```

Then the corresponding **H.P.** becomes:

```
1/1, 1/1.5, 1/2, 1/2.5 → 1, 0.666..., 0.5, 0.4...
```

So:

* If A.P. is: `a, a + d, a + 2d, ...`
* Then H.P. is: `1/a, 1/(a + d), 1/(a + 2d), ...`


### **C++ Program to Print First `n` Terms of an H.P.**

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 1;         // first term of the underlying A.P.
    int b = 4;         // second term of the A.P.
    int d = b - a;     // common difference
    int n;

    cout << "Enter number of terms: ";
    cin >> n;

    int currentTerm = a;

    cout << "Harmonic Progression: ";
    for (int i = 1; i <= n; i++) {
        cout << "1/" << currentTerm;

        if (i < n) {
            cout << ", ";
        }

        currentTerm += d;
    }

    return 0;
}
```


### 🧪 **Example Input:**

```
Enter number of terms: 5
```

**Output:**

```
1/1, 1/4, 1/7, 1/10, 1/13
```

---








### **Question 28:**

#### Write a program to print the sum of sequence: 1, 4, 7, 10, ...


### **Formula to Find the Sum of A.P.**

If you know:

* **First term (a)**
* **Common difference (d)**
* **Number of terms (n)**

Then the **sum of the first `n` terms** is:

$$
\text{Sum} = \frac{n}{2} \times \left[2a + (n - 1) \times d\right]
$$

Or:

$$
\text{Sum} = \frac{n}{2} \times (\text{first term} + \text{last term})
$$


### **C++ Program to Calculate and Print the Sum of an A.P.**

```cpp
#include <iostream>
using namespace std;

int main() {
    int a, d, n;

    cout << "Enter first term (a): ";
    cin >> a;

    cout << "Enter common difference (d): ";
    cin >> d;

    cout << "Enter number of terms (n): ";
    cin >> n;

    int sum = (n * (2 * a + (n - 1) * d)) / 2;

    cout << "The sum of the A.P. is: " << sum << endl;

    return 0;
}
```


### **Example Input:**

```
a = 1
d = 3
n = 5
```

The A.P. is: `1, 4, 7, 10, 13`


### **Output:**

```
The sum of the A.P. is: 35
```

---







### **Question 29:**

#### Write a program to print the sum of sequence: 5, 15, 45, 135, ...


### **Sum of the first `n` terms of a G.P.:**

If you know:

* **First term (a)**
* **Common ratio (r)**
* **Number of terms (n)**

Then the sum of the first `n` terms is:

$$
S_n = \frac{a(1 - r^n)}{1 - r} \quad \text{(for } r \neq 1\text{)}
$$

For **r = 1**, the sum becomes:

$$
S_n = a \times n
$$


### **C++ Program to Calculate and Print the Sum of a G.P.**

```cpp
#include <iostream>
#include <cmath>  // for power function (pow)
using namespace std;

int main() {
    int a = 5;           // First term
    int r = 3;           // Common ratio
    int n;               // Number of terms

    cout << "Enter number of terms: ";
    cin >> n;

    // Calculate the sum of the first 'n' terms of the G.P.
    double sum = 0;

    if (r == 1) {
        // If r = 1, the sum is just a * n
        sum = a * n;
    } else {
        // Use the sum formula for G.P.
        sum = a * (1 - pow(r, n)) / (1 - r);
    }

    // Print the sum
    cout << "The sum of the G.P. is: " << sum << endl;

    return 0;
}
```


### **Example Input:**

```
Enter number of terms: 5
```

The G.P. is: `5, 15, 45, 135, 405`

### **Output:**

```
The sum of the G.P. is: 605
```

---


