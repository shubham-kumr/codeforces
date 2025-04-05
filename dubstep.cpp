#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string ans = "";
    for (int i = 0; i < s.size(); i++) {
        if (i + 2 < s.size() && s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B') {
            i += 2;
            if (ans.size() > 0 && ans.back() != ' ') {
                ans += ' ';
            }
        } else {
            ans += s[i];
        }
    }
    cout << ans << endl;
}