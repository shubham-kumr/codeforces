#include <bits/stdc++.h>
using namespace std;

int vanyaandfence(int n, int h, vector<int> a) {
    int width = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > h) {
            width += 2;
        } else {
            width += 1;
        }
    }
    return width;
}

int main() {
    int n, h;
    cin >> n >> h;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << vanyaandfence(n, h, a) << endl;
    return 0;
}