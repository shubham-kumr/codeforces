#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int max = 0;
    int current = 0;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        current -= a;
        current += b;
        if (current > max) {
            max = current;
        }
    }
    cout << max << endl;
    return 0;
}