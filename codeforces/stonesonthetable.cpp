#include<bits/stdc++.h>
using namespace std;

int stones(string s) {
    int count = 0;
    for (int i = 0; i < s.size() - 1; i++) {
        if (s[i] == s[i + 1]) {
            count++;
        }
    }
    return count;
};

int main() {
    int n;
    string s;
    cin >> n >> s;
    cout << stones(s) << endl;
    return 0;
}