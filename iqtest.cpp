#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i : a) cin >> i;

    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] & 1) ++cnt1;
        else ++cnt2;
    }

    if (cnt1 > cnt2) {
        for (int i = 0; i < n; ++i) {
            if (a[i] % 2 == 0) {
                cout << i + 1 << endl;
                break;
            }
        }
    } else {
        for (int i = 0; i < n; ++i) {
            if (a[i] & 1) {
                cout << i + 1 << endl;
                break;
            }
        }
    }

    return 0;
}