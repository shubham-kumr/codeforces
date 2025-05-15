#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    int max_welfare = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] > max_welfare) max_welfare = a[i];
    }
    long long total = 0;
    for (int i = 0; i < n; ++i) {
        total += max_welfare - a[i];
    }
    cout << total << endl;
    return 0;
}