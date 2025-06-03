#include <iostream>
#include <string>
using namespace std;

int main() {
    string x;
    cin >> x;
    int n = x.size();

    for (int i = 0; i < n; ++i) {
        int digit = x[i] - '0';
        int inverted = 9 - digit;
        if (i == 0 && digit == 9) continue;
        if (inverted < digit)
            x[i] = inverted + '0';
    }
    cout << x << endl;
    return 0;
}