#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    int left = 0, right = 0, sum = 0, max_books = 0;
    while (right < n) {
        sum += a[right];
        while (sum > t) {
            sum -= a[left];
            ++left;
        }
        max_books = max(max_books, right - left + 1);
        ++right;
    }
    cout << max_books << endl;
    return 0;
}