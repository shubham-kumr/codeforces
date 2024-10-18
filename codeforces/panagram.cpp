#include<bits/stdc++.h>
using namespace std;

bool isPanagram(string s) {
    vector<bool> present(26, false);
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            present[c - 'a'] = true;
        } else if (c >= 'A' && c <= 'Z') {
            present[c - 'A'] = true;
        }
    }
    for (bool p : present) {
        if (!p) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    string s(n, ' ');
    cin >> s;
    cout << (isPanagram(s) ? "YES" : "NO") << endl;
    return 0;
}