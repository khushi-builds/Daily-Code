#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int n;
    cout << "Enter decimal number: ";
    cin >> n;

    int ans = 0;
    int i = 0;

    while(n != 0) {

        int bit = n % 2;

        ans = (bit * pow(10, i)) + ans;

        n = n / 2;
        i++;
    }

    cout << "Binary number is " << ans << endl;

    return 0;
}
