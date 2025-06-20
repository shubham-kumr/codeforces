#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    vector<int> negatives;
    for (int price : a) {
        if (price < 0) negatives.push_back(-price);
    }

    sort(negatives.rbegin(), negatives.rend());

    int max_earn = 0;
    for (int i = 0; i < min(m, (int)negatives.size()); ++i) {
        max_earn += negatives[i];
    }

    cout << max_earn << endl;
    return 0;
}