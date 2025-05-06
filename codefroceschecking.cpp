#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int t;
    cin >> t;

    unordered_set<char> codeforces_chars = {'c', 'o', 'd', 'e', 'f', 'r', 'c', 'e', 's'};

    while (t--) {
        char c;
        cin >> c;

        if (codeforces_chars.count(c)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}