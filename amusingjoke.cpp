#include<bits/stdc++.h>
using namespace std;

int main() {
    string a, b, c;
    cin >> a >> b >> c;
    string s = a + b;
    sort(s.begin(), s.end());
    sort(c.begin(), c.end());
    cout << (s == c ? "YES" : "NO") << endl;
    return 0;
}