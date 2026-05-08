#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    string characterName = "John";
    int characterAge = 35;

    cout << "There once was a man named " << characterName << endl;
    cout << "He was " << characterAge << " years old" << endl;
    cout << "He liked the name " << characterName << endl;
    cout << "But did not like being " << characterAge << endl;

    // Sum of two numbers
    int a, b;
    cin >> a >> b;

    cout << "Sum = " << a + b << endl;

    // Check Positive or Negative
    int n;
    cin >> n;

    if(n > 0) {
        cout << "Positive" << endl;
    }
    else if(n < 0) {
        cout << "Negative" << endl;
    }
    else {
        cout << "Zero" << endl;
    }

    // Even or Odd
    cin >> n;

    if(n % 2 == 0) {
        cout << "Even" << endl;
    }
    else {
        cout << "Odd" << endl;
    }

    return 0;
}
