#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> prices(n);
    for (int i = 0; i < n; ++i) {
        cin >> prices[i];
    }

    // Sort the prices to enable binary search
    sort(prices.begin(), prices.end());

    int q;
    cin >> q;
    while (q--) {
        int mi;
        cin >> mi;

        // Use upper_bound to find the number of shops where price <= mi
        int count = upper_bound(prices.begin(), prices.end(), mi) - prices.begin();
        cout << count << endl;
    }

    return 0;
}