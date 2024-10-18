#include<bits/stdc++.h>
using namespace std;

int borrow(int k, int w, int n) {
    return max(0, k * (w * (w + 1) / 2) - n);
}

int main() {
    int k, n, w;
    cin >> k >> n >> w;
    cout << borrow(k, w, n) << endl;
    return 0;
}