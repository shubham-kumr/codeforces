#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int diff = abs(a - b);
        // Minimum moves required is the ceiling of diff / 10
        cout << (diff + 9) / 10 << endl;
    }
    return 0;
}