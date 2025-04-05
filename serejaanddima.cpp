#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int sereja = 0, dima = 0;
    int left = 0, right = n - 1;
    bool serejaTurn = true;

    while (left <= right) {
        if (a[left] > a[right]) {
            if (serejaTurn) {
                sereja += a[left];
            } else {
                dima += a[left];
            }
            left++;
        } else {
            if (serejaTurn) {
                sereja += a[right];
            } else {
                dima += a[right];
            }
            right--;
        }
        serejaTurn = !serejaTurn;
    }

    cout << sereja << " " << dima << endl;
    return 0;
}