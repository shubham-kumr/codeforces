#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<bool> is_prime(1000001, true);
    is_prime[0] = is_prime[1] = false;
    for(int i = 2; i * i <= 1000000; i++) {
        if(is_prime[i]) {
            for(int j = i * i; j <= 1000000; j += i) {
                is_prime[j] = false;
            }
        }
    }
    for(int i = 0; i < n; i++) {
        long long x = sqrt(v[i]);
        if(x * x == v[i] && is_prime[x]) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}