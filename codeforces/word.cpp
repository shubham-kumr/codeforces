#include<bits/stdc++.h>
using namespace std;

string word(string s) {
    int lower = 0, upper = 0;
    string str;
    for (char c : s) {
        if (islower(c)) {
            lower++;
        } else {
            upper++;
        }
    }
    if (lower >= upper) {
        for (char &c : s) {
            str += tolower(c);
        }
    } else {
        for (char &c : s) {
            str += toupper(c);
        }
    }
    return str;
}

int main() {
    string s;
    cin >> s;
    cout << word(s) << endl;
    return 0;
}