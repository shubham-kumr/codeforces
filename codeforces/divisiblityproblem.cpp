#include<bits/stdc++.h>
using namespace std;

int problem(int a, int b) {
    if(a%b == 0) return 0;
    return b - a%b;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;
        cout << problem(a, b) << endl;
    }
    return 0;
}