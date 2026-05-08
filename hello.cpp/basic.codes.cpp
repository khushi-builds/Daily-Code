#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    // Print numbers from 1 to n
    cout << "Numbers from 1 to n:" << endl;

    int i = 1;

    while(i <= n) {
        cout << i << endl;
        i++;
    }

    // Sum of first n numbers
    i = 1;
    int sum = 0;

    while(i <= n) {
        sum = sum + i;
        i++;
    }

    cout << "Sum is: " << sum << endl;

    // Even numbers till n
    cout << "Even numbers till n:" << endl;

    i = 2;

    while(i <= n) {
        cout << i << " ";
        i = i + 2;
    }

    cout << endl;

    // Prime number check
    if(n <= 1) {
        cout << "Not Prime" << endl;
    }
    else {

        i = 2;
        bool isPrime = true;

        while(i < n) {

            if(n % i == 0) {
                isPrime = false;
                break;
            }

            i++;
        }

        if(isPrime) {
            cout << "Prime Number" << endl;
        }
        else {
            cout << "Not Prime" << endl;
        }
    }

    // Largest of two numbers
    int a, b;
    cin >> a >> b;

    if(a > b) {
        cout << a << " is greater" << endl;
    }
    else {
        cout << b << " is greater" << endl;
    }

    // Voting eligibility
    int age;
    cin >> age;

    if(age >= 18) {
        cout << "Eligible to vote" << endl;
    }
    else {
        cout << "Not eligible to vote" << endl;
    }

    // String input
    string name;
    cin >> name;

    cout << "Hello " << name << endl;

    // Username check
    string username;
    cin >> username;

    if(username == "admin") {
        cout << "Correct username" << endl;
    }
    else {
        cout << "Wrong username" << endl;
    }

    // Bool example
    bool isCoding = true;

    cout << "Bool value: " << isCoding << endl;

    // Password checker
    string password;
    cin >> password;

    bool correct = false;

    if(password == "1234") {
        correct = true;
    }

    if(correct) {
        cout << "Login Successful" << endl;
    }
    else {
        cout << "Wrong Password" << endl;
    }

    // Character check
    char ch;
    cin >> ch;

    if(ch == 'a') {
        cout << "You entered a" << endl;
    }
    else {
        cout << "Not a" << endl;
    }

    // Simple calculator
    int x, y;
    char op;

    cin >> x >> op >> y;

    if(op == '+') {
        cout << x + y << endl;
    }
    else if(op == '-') {
        cout << x - y << endl;
    }
    else if(op == '*') {
        cout << x * y << endl;
    }
    else if(op == '/') {
        cout << x / y << endl;
    }

    return 0;
}
