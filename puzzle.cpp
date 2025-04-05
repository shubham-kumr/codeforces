#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> arr(m);
    for(int i = 0; i < m; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    
    int min_diff = INT_MAX;
    for(int i = 0; i <= m - n; i++) {
        int diff = arr[i + n - 1] - arr[i];
        min_diff = min(min_diff, diff);
    }
    
    cout << min_diff << endl;
    return 0;
}