#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int police = 0;
    int crimes = 0;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (x == -1) {
            if (police == 0) {
                ++crimes;
            } else {
                --police;
            }
        } else {
            police += x;
        }
    }
    cout << crimes << endl;
    return 0;
}