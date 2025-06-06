#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n >= 0) {
        cout << n << endl;
    } else {
        int option1 = n / 10;
        int last = n % 10;
        int without_second_last = (n / 100) * 10 + last;
        cout << max(option1, without_second_last) << endl;
    }

    return 0;
}