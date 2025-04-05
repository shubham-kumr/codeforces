#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, l;
    cin >> n >> l;
    vector<int> lanterns(n);
    for (int i = 0; i < n; i++) {
        cin >> lanterns[i];
    }

    sort(lanterns.begin(), lanterns.end());

    double max_gap = 0;
    for (int i = 1; i < n; i++) {
        max_gap = max(max_gap, (double)(lanterns[i] - lanterns[i - 1]));
    }

    double max_end_gap = max((double)lanterns[0], (double)(l - lanterns[n - 1]));

    double d = max(max_gap / 2.0, max_end_gap);

    cout << fixed << setprecision(10) << d << endl;

    return 0;
}