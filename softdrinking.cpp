#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int total_drinks = k * l;
    int total_limes = c * d;
    int total_salt = p;

    int drinks = total_drinks / nl;
    int limes = total_limes;
    int salt = total_salt / np;

    cout << min({drinks, limes, salt}) / n << endl;

    return 0;
}