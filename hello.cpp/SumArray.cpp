#include <iostream>
using namespace std;

int main() {

    int arr[5] = {1, 2, 3, 4, 5};

    int sum = 0;

    // adding all elements
    for(int i = 0; i < 5; i++) {
        sum = sum + arr[i];
    }

    cout << "Sum of all elements is: " << sum << endl;

    return 0;
}
