#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int max = 0, min = 101, maxIndex = 0, minIndex = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x > max) {
            max = x;
            maxIndex = i;
        }
        if (x <= min) {
            min = x;
            minIndex = i;
        }
    }
    cout << (maxIndex > minIndex ? maxIndex + n - minIndex - 2 : maxIndex + n - minIndex - 1) << endl;
    return 0;
}