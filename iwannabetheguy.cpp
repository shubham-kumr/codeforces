#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    set<int> levels;
    for (int i = 0; i < 2; i++) {
        int x;
        cin >> x;
        for (int j = 0; j < x; j++) {
            int level;
            cin >> level;
            levels.insert(level);
        }
    }
    cout << (levels.size() == n ? "I become the guy." : "Oh, my keyboard!") << endl;
    return 0;
}