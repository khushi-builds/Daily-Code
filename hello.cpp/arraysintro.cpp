#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    cout << "Printing the array" << endl;
    for(int i = 0; i<size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int number[15];
    cout << "Value at 1 index " << number[1] << endl;

    int second[3] = {5,7,11};
    cout << second[2] << endl;

    int third[15] = {2,7};
    int n = 15;
    cout << "Printing the array" << endl;
    for(int i = 0; i<n; i++) {
        cout << third[i] << " ";
    }

    int fourth[10] = {0};
    n = 10;
    cout << "Printing the array" << endl;
    for(int i = 0; i<n; i++) {
        cout<< fourth[i] << " ";
    }

    int fifth[12] = {0};
    n = 12;
    printArray(fifth, 12);

    char ch[5] = {'a', 'b', 'c', 'r', 'p'};
    cout << ch[3] << endl;
    cout << "Printing the array" << endl;
    for(int i = 0; i<n; i++) {
        cout << ch[i] << " ";
        }
}
