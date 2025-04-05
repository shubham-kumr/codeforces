#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, cnt = 0;
        cin >> n;
        vector<int> v;
        for(int i = 1; n; i *= 10) {
            if(n % i) {
                v.push_back(n % i);
                n -= n % i;
                cnt++;
            }
        }
        cout << cnt << endl;
        for(int i = 0; i < v.size(); i++) {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}