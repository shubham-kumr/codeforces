#include <bits/stdc++.h>
using namespace std;

void queueintheschool(string& s, int t) {
    int n = s.size();
    while (t--) {
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == 'B' && s[i + 1] == 'G') {
                swap(s[i], s[i + 1]);
                i++;
            }
        }
    }
}

int main() {
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    queueintheschool(s, t);
    cout << s << endl;
    return 0;
}