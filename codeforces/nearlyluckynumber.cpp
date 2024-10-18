#include<bits/stdc++.h>
using namespace std;

bool isNearlyLucky(long long n) {
    string s = to_string(n);
    int count = 0;
    for (char c : s) {
        if (c == '4' || c == '7') {
            count++;
        }
    }
    string countStr = to_string(count);
    for (char c : countStr) {
        if (c != '4' && c != '7') {
            return false;
        }
    }
    return true;
}

int main() {
    long long n;
    cin >> n;
    if (isNearlyLucky(n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}