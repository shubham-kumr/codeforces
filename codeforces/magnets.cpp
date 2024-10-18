#include<bits/stdc++.h>
using namespace std;

int magnets(int n) {
    int count = 1;
    string prev;
    cin >> prev;
    for (int i = 1; i < n; i++) {
        string curr;
        cin >> curr;
        if (curr != prev) {
            count++;
            prev = curr;
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;

    cout << magnets(n) << endl;

    return 0;
}