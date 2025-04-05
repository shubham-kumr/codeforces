#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    int time = 240 - t;
    int problems = 0;
    for (int i = 1; i <= n; i++) {
        time -= 5 * i;
        if (time < 0) {
            break;
        }
        problems++;
    }
    cout << problems << endl;
    return 0;
}