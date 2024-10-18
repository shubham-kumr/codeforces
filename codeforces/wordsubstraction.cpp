#include<bits/stdc++.h>
using namespace std;

int wrongsubtraction(int n, int k) {
    for (int i = 0; i < k; i++) {
        if (n % 10 == 0) {
            n /= 10;
        } else {
            n--;
        }
    }
    return n;
}

int main() {
    int n, k;
    cin >> n >> k;
    cout << wrongsubtraction(n, k) << endl;
    return 0;
}