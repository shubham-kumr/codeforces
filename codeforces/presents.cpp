#include<bits/stdc++.h>
using namespace std;

vector<int> presents(int n) {
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;
        v[p - 1] = i + 1;
    }
    return v;
}

int main() {
    int n;
    cin >> n;

    vector<int> v = presents(n);
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}