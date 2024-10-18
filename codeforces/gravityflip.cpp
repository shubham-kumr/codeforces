#include <bits/stdc++.h>
using namespace std;

void gravityFlip(int n, vector<int>&arr) {
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    gravityFlip(n,arr);
    return 0;
}