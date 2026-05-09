#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    cout << "Pattern 1" << endl;

    int i = 1;
    while(i<=n) {

        int j = 1;
        while(j<=n) {
            cout << "*";
            j = j+1;
        }
        cout<<endl;
        i = i+1;
    }

    cout << endl;


    cout << "Pattern 2" << endl;

    i = 1;
    while(i<=n) {

        int j = 1;
        while(j<=n) {
            cout << i;
            j = j+1;
        }
        cout<<endl;
        i = i+1;
    }

    cout << endl;


    cout << "Pattern 3" << endl;

    i = 1;
    while(i<=n) {

        int j = 1;
        while(j<=n) {
                cout << j;
                j = j+1;
        }
        cout << endl;
        i = i + 1;
    }

    cout << endl;


    cout << "Pattern 4" << endl;

    i = 1;
    while(i<=n) {

        int j = 1;
        while(j<=n) {
                cout << n-j+1;
                j = j+1;
        }
        cout << endl;
        i = i + 1;
    }

    cout << endl;


    cout << "Pattern 5" << endl;

    i = 1;
    int count = 1;
    while(i<=n) {

        int j = 1;
        while(j<=n) {
                cout << count << " ";
                count = count+1;
                j = j+1;
        }
        cout << endl;
        i = i + 1;
    }

    cout << endl;


    cout << "Pattern 6" << endl;

    i = 1;
    while(i<=n) {

        int j = 1;
        while(j<=i) {
                cout <<"*";
                j = j+1;
        }
        cout << endl;
        i = i + 1;
    }

    cout << endl;


    cout << "Pattern 7" << endl;

    i = 1;
    while(i<=n) {

        int j = 1;
        while(j<=i) {
                cout <<i;
                j = j+1;
        }
        cout << endl;
        i = i + 1;
    }

    cout << endl;


    cout << "Pattern 8" << endl;

    i = 1;
    count = 1;
    while(i<=n) {

        int j = 1;
        while(j<=i) {
                cout << count << " ";
                count = count + 1;
                j = j+1;
        }
        cout << endl;
        i = i + 1;
    }

    cout << endl;


    cout << "Pattern 9" << endl;

    i = 1;
    while(i<=n) {

        int j = 1;
        int value = i;
        while(j<=i) {
                cout << value;
                value = value + 1;
                j = j+1;
        }
        cout << endl;
        i = i + 1;
    }

    cout << endl;


    cout << "Pattern 10" << endl;

    i = 1;
    while(i<=n) {

        int j = 1;
        while(j<=i) {
                cout <<(i-j+1);
                j = j+1;
        }
        cout << endl;
        i = i + 1;
    }

    cout << endl;


    cout << "Pattern 11" << endl;

    i = 1;
    while(i<=n) {

        int j = 1;
        while(j<=n) {
                char ch = 'A' + i - 1;
                cout << ch;
                j = j+1;
        }
        cout << endl;
        i = i + 1;
    }

    cout << endl;


    cout << "Pattern 12" << endl;

    i = 1;
    while(i<=n) {

        int j = 1;
        while(j<=i) {
                char ch = 'A' + i - 1;
                cout << ch;
                j = j+1;
        }
        cout << endl;
        i = i + 1;
    }

    cout << endl;


    cout << "Pattern 13" << endl;

    i = 1;
    while(i<=n) {

        int j = 1;
        while(j<=i) {
                char ch = 'A' + i + j - 2;
                cout << ch;
                j = j+1;
        }
        cout << endl;
        i = i + 1;
    }

}
