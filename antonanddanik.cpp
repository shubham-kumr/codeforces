#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int antonCount = 0;
    int danikCount = 0;
    for (char c : s) {
        if (c == 'A') {
            antonCount++;
        } else {
            danikCount++;
        }
    }

    if (antonCount > danikCount) {
        cout << "Anton" << endl;
    } else if (antonCount < danikCount) {
        cout << "Danik" << endl;
    } else {
        cout << "Friendship" << endl;
    }

    return 0;
}