#include<bits/stdc++.h>
using namespace std;

function<string(string)> stringtask = [](string s) {
    string res = "";
    for (char c : s) {
        if (c >= 'A' && c <= 'Z') c += 32;
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y') {
            res += '.';
            res += c;
        }
    }
    return res;
};

int main() {
    string s;
    cin >> s;
    cout << stringtask(s) << endl;
    return 0;
}