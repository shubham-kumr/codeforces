#include<bits/stdc++.h>
using namespace std;    

bool translation(string s, string t) {
    reverse(s.begin(), s.end());
    return s == t;
}

int main() {
    string s, t;
    cin >> s >> t;
    cout << (translation(s, t) ? "YES" : "NO") << endl;
    return 0;
}