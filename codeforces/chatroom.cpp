#include<bits/stdc++.h>
using namespace std;

bool isHelloPossible(string& s) {
    string hello = "hello";
    int j = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == hello[j]) {
            j++;
        }

        if (j == hello.length()) {
            return true;
        }
    }

    return false;
}

int main() {
    string s;
    cin >> s;

    if (isHelloPossible(s)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}