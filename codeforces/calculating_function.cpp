#include<bits/stdc++.h>
using namespace std;

long long calculating_function(long long n) {
    if (n % 2 == 0) {
        return n / 2;
    } else {
        return -(n + 1) / 2;
    }
}

int main() {
    long long n;
    cin >> n;
    cout << calculating_function(n) << endl;
    return 0;
}