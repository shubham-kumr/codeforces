#include <bits/stdc++.h>
using namespace std;

int georgeandaccomodation(int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        int p, q;
        cin >> p >> q;
        if (q - p >= 2) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;

    cout << georgeandaccomodation(n) << endl;

    return 0;
}