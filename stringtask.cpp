#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string vowel = "aeiouyAEIOUY";
    for (char c : s) {
        if (vowel.find(c) == string::npos) {
            cout << "." << (char)tolower(c);
        }
    }
    cout << endl;
}