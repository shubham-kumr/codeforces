#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    string target = "codeforces";
    while (t--) {
        string s;
        cin >> s;
        int diff = 0;
        for (int i = 0; i < 10; ++i) {
            if (s[i] != target[i]) diff++;
        }
        cout << diff << endl;
    }
    return 0;
}