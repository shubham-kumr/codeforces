#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        // (c - a) + (b - c) = b - a, for any c in [a, b]
        cout << (b - a) << endl;
    }
    return 0;
}