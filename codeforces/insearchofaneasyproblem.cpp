#include<bits/stdc++.h>
using namespace std;

void easyproblem(vector<int>& a) {
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == 1) {
            cout << "HARD" << endl;
            return;
        }
    }
    cout << "EASY" << endl;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    easyproblem(a);
    return 0;
}