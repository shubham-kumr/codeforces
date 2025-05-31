#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        long long ans = k + (k - 1) / (n - 1);
        cout << ans << '\n';
    }
    return 0;
}