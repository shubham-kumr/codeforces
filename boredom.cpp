#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MAX_A = 100005;

int main() {
    int n;
    cin >> n;
    vector<long long> freq(MAX_A, 0);
    int max_val = 0;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        freq[x]++;
        max_val = max(max_val, x);
    }

    vector<long long> dp(MAX_A, 0);
    dp[0] = 0;
    dp[1] = freq[1] * 1;
    for (int i = 2; i <= max_val; ++i) {
        dp[i] = max(dp[i-1], dp[i-2] + freq[i] * i);
    }
    cout << dp[max_val] << endl;
    return 0;
}