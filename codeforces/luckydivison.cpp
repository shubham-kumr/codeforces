#include<bits/stdc++.h>
using namespace std;

bool isLucky(int n) {
    while (n > 0) {
        int digit = n % 10;
        if (digit != 4 && digit != 7) {
            return false;
        }
        n /= 10;
    }
    return true;
}

bool isAlmostLucky(int n) {
    for (int i = 4; i <= n; i++) {
        if (n % i == 0 && isLucky(i)) {
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n;

    if (isAlmostLucky(n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}