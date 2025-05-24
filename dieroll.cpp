#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int a, int b) {
    while (b) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main() {
    int Y, W;
    cin >> Y >> W;
    int mx = max(Y, W);
    int favorable = 7 - mx;
    int divisor = gcd(favorable, 6);
    cout << favorable / divisor << "/" << 6 / divisor << endl;
    return 0;
}