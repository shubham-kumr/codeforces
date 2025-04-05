#include <bits/stdc++.h>
using namespace std;

int twins(vector<int> coins, int n) {
    sort(coins.rbegin(), coins.rend());

    int total_sum = accumulate(coins.begin(), coins.end(), 0);
    int my_sum = 0;
    int coins_taken = 0;

    for (int coin : coins) {
        my_sum += coin;
        coins_taken++;
        if (my_sum > total_sum - my_sum) {
            break;
        }
    }

    return coins_taken;
}

int main() {
    int n;
    cin >> n;

    vector<int> coins(n);
    for (int i = 0; i < n; ++i) {
        cin >> coins[i];
    }
    cout<<twins(coins, n)<<endl;
    return 0;
}