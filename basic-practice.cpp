#include <iostream>
using namespace std;

// 1. Print "Hello World"
void helloWorld() {
    cout << "Hello World" << endl;
}

// 2. Take name as input and print "Hello <name>"
void inputName() {
    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Hello " << name << endl;
}

// 3. Check if a number is even or odd
void evenOdd() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num % 2 == 0)
        cout << "Even" << endl;
    else
        cout << "Odd" << endl;
}

// 4. Find the greater number between two numbers
void greaterNumber() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (a > b)
        cout << a << " is greater" << endl;
    else
        cout << b << " is greater" << endl;
}

// 5. Find the factorial of a number
void factorial() {
    int n, fact = 1;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
        fact *= i;
    cout << "Factorial of " << n << " is " << fact << endl;
}

// 6. Find the sum of first N natural numbers
void sumNaturalNumbers() {
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
        sum += i;
    cout << "Sum of first " << n << " natural numbers is " << sum << endl;
}

// 7. Swap two numbers using a temporary variable
void swapNumbers() {
    int a, b, temp;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    temp = a;
    a = b;
    b = temp;
    cout << "After swapping: " << a << " " << b << endl;
}

// 8. Swap two numbers without using a temporary variable
void swapWithoutTemp() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After swapping: " << a << " " << b << endl;
}

// 9. Find the sum of digits of a number
void sumOfDigits() {
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    cout << "Sum of digits is " << sum << endl;
}

// 10. Reverse a number
void reverseNumber() {
    int n, rev = 0;
    cout << "Enter a number: ";
    cin >> n;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    cout << "Reverse of number is " << rev << endl;
}

// 11. Check if a number is palindrome
void palindromeNumber() {
    int n, temp, rev = 0;
    cout << "Enter a number: ";
    cin >> n;
    temp = n;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    if (temp == rev)
        cout << "Palindrome" << endl;
    else
        cout << "Not a palindrome" << endl;
}

// 12. Simple calculator
void calculator() {
    char op;
    float a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    switch (op) {
        case '+': cout << a + b; break;
        case '-': cout << a - b; break;
        case '*': cout << a * b; break;
        case '/': cout << a / b; break;
        default: cout << "Invalid operator"; break;
    }
    cout << endl;
}

// 13. Print Fibonacci series up to N terms
void fibonacci() {
    int n, a = 0, b = 1, c;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Fibonacci series: " << a << " " << b << " ";
    for (int i = 2; i < n; i++) {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    cout << endl;
}

// 14. Check if a number is prime
void primeNumber() {
    int num, flag = 1;
    cout << "Enter a number: ";
    cin >> num;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
        cout << "Prime" << endl;
    else
        cout << "Not prime" << endl;
}

  // 15. Reverse a string
void ReverseString() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    int n = str.length();
    for (int i = n - 1; i >= 0; i--)
        cout << str[i];
    cout << endl;
}

// 16. Find the largest element in an array
void LargestElementArray() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    cout << "Largest element in the array is " << max << endl;
}

//smallest element in an array
void SmallestElementArray() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min)
            min = arr[i];
    }
    cout << "Smallest element in the array is " << min << endl;
}

//sum of digits of a number
void sumOfDigits() {
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    cout << "Sum of digits is " << sum << endl;
}

//Reverse an array
void ReverseArray() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Reversed array: ";
    for (int i = n - 1; i >= 0; i--)
        cout << arr[i] << " ";
    cout << endl;
}


//Bubble sort
void BubbleSort() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

//Selection sort
void SelectionSort() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min])
                min = j;
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

//Insertion sort
void InsertionSort() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

//Largest element in the array
void LargestElementArray() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    cout << "Largest element in the array is " << max << endl;
}

//Smallest element in the array 
void SmallestElementArray() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min)
            min = arr[i];
    }
    cout << "Smallest element in the array is " << min << endl;
}

int main() {
    int choice;
    do {
        cout << "\nSelect a program to run: \n";
        cout << "1. Hello World\n2. Input Name\n3. Even/Odd\n4. Greater Number\n5. Factorial\n";
        cout << "6. Sum of Natural Numbers\n7. Swap Numbers (With Temp)\n8. Swap Numbers (Without Temp)\n";
        cout << "9. Sum of Digits\n10. Reverse Number\n11. Palindrome Check\n";
        cout << "12. Calculator\n13. Fibonacci Series\n14. Prime Check\n 15. Reverse String\n 16. Largest Element in Array\n";
        cout << "17. Smallest Element in Array\n 18. Sum of Digits\n 19. Reverse Array\n 20. Bubble Sort\n ";
        cout<< "21. Selection Sort\n 22.Largest Element in Array\n 23. Smallest Element in Array\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: helloWorld(); break;
            case 2: inputName(); break;
            case 3: evenOdd(); break;
            case 4: greaterNumber(); break;
            case 5: factorial(); break;
            case 6: sumNaturalNumbers(); break;
            case 7: swapNumbers(); break;
            case 8: swapWithoutTemp(); break;
            case 9: sumOfDigits(); break;
            case 10: reverseNumber(); break;
            case 11: palindromeNumber(); break;
            case 12: calculator(); break;
            case 13: fibonacci(); break;
            case 14: primeNumber(); break;
            case 15: ReverseString(); break;
            case 16: LargestElementArray(); break;  
            case 17: SmallestElementArray(); break;
            case 18: sumOfDigits(); break;
            case 19: ReverseArray(); break;
            case 20: BubbleSort(); break;
            case 21: SelectionSort(); break;
            case 22: LargestElementArray(); break;
            case 23: SmallestElementArray(); break;
            case 0: cout << "Exiting program...\n"; break;
            default: cout << "Invalid choice! Try again.\n"; break;
        }
    } while (choice != 0);

    return 0;
}
