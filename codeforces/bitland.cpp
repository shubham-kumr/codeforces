#include<bits/stdc++.h>
using namespace std;

int main() {
    int x = 0;
    int n;
    cin >> n;
    while (n!=0) {
        string s;
        cin >> s;
        if (s[1]=='+') {

            x++;
            n--;
        } else {
            x--;
            n--;
        }
    }
    cout<<x;
}