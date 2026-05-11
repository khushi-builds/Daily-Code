#include <iostream>
using namespace std;

int main() {

    int n;

    // 1. Inverted Star Triangle
    cout << "Pattern 1" << endl;
    cin >> n;

    for(int i = n; i >= 1; i--) {

        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }

        cout << endl;
    }

    cout << endl;


    // 2. Right Number Triangle
    cout << "Pattern 2" << endl;

    for(int i = 1; i <= n; i++) {

        for(int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        cout << endl;
    }

    cout << endl;


    // 3. Repeated Number Pattern
    cout << "Pattern 3" << endl;

    for(int i = 1; i <= n; i++) {

        for(int j = 1; j <= i; j++) {
            cout << i << " ";
        }

        cout << endl;
    }

    cout << endl;


    // 4. Floyd’s Triangle
    cout << "Pattern 4" << endl;

    int count = 1;

    for(int i = 1; i <= n; i++) {

        for(int j = 1; j <= i; j++) {

            cout << count << " ";
            count++;
        }

        cout << endl;
    }

    cout << endl;


    // 5. Alphabet Triangle
    cout << "Pattern 5" << endl;

    for(int i = 1; i <= n; i++) {

        char ch = 'A';

        for(int j = 1; j <= i; j++) {

            cout << ch << " ";
            ch++;
        }

        cout << endl;
    }

    cout << endl;


    // 6. Reverse Number Pattern
    cout << "Pattern 6" << endl;

    for(int i = 1; i <= n; i++) {

        for(int j = i; j >= 1; j--) {
            cout << j << " ";
        }

        cout << endl;
    }

    cout << endl;


    // 7. Hollow Square Pattern
    cout << "Pattern 7" << endl;

    for(int i = 1; i <= n; i++) {

        for(int j = 1; j <= n; j++) {

            if(i == 1 || i == n || j == 1 || j == n) {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }

        cout << endl;
    }

    cout << endl;


    // 8. Pyramid Pattern
    cout << "Pattern 8" << endl;

    for(int i = 1; i <= n; i++) {

        for(int space = 1; space <= n-i; space++) {
            cout << " ";
        }

        for(int star = 1; star <= (2*i)-1; star++) {
            cout << "*";
        }

        cout << endl;
    }

    cout << endl;


    // 9. Binary Pattern
    cout << "Pattern 9" << endl;

    for(int i = 1; i <= n; i++) {

        for(int j = 1; j <= i; j++) {

            if((i + j) % 2 == 0) {
                cout << "1 ";
            }
            else {
                cout << "0 ";
            }
        }

        cout << endl;
    }

    cout << endl;


    // 10. Diamond Pattern
    cout << "Pattern 10" << endl;

    // Upper Part
    for(int i = 1; i <= n; i++) {

        for(int space = 1; space <= n-i; space++) {
            cout << " ";
        }

        for(int star = 1; star <= (2*i)-1; star++) {
            cout << "*";
        }

        cout << endl;
    }

    // Lower Part
    for(int i = n-1; i >= 1; i--) {

        for(int space = 1; space <= n-i; space++) {
            cout << " ";
        }

        for(int star = 1; star <= (2*i)-1; star++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
