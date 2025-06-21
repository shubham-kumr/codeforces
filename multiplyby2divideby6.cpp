#include <iostream>
using namespace std;

int min_moves(long long n) {
    int cnt2 = 0, cnt3 = 0;
    while (n % 2 == 0) {
        n /= 2;
        cnt2++;
    }
    while (n % 3 == 0) {
        n /= 3;
        cnt3++;
    }
    if (n != 1 || cnt2 > cnt3) return -1;
    return (cnt3 - cnt2) + cnt3;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        cout << min_moves(n) << endl;
    }
    return 0;
}