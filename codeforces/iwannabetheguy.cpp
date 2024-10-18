#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, p, q;
    cin >> n;
    cin >> p;
    vector<int> x(p);
    for (int i = 0; i < p; i++) {
        cin >> x[i];
    }
    cin >> q;
    vector<int> y(q);
    for (int i = 0; i < q; i++) {
        cin >> y[i];
    }
    vector<int> a(n, 0);
    for (int i = 0; i < p; i++) {
        a[x[i] - 1] = 1;
    }
    for (int i = 0; i < q; i++) {
        a[y[i] - 1] = 1;
    }
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            cout << "Oh, my keyboard!";
            return 0;
        }
    }
    cout << "I become the guy.";
    return 0;
}