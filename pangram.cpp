#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<char> letters;
    for (char c : s) {
        letters.insert(tolower(c));
    }
    cout << (letters.size() == 26 ? "YES" : "NO") << endl;
    return 0;
}