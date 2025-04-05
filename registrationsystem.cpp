#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_map<string, int> database;

    for (int i = 0; i < n; ++i) {
        string name;
        cin >> name;

        if (database.find(name) == database.end()) {
            database[name] = 0;
            cout << "OK" << endl;
        } else {
            int count = ++database[name];
            string newName = name + to_string(count);
            while (database.find(newName) != database.end()) {
                count = ++database[name];
                newName = name + to_string(count);
            }
            database[newName] = 0;
            cout << newName << endl;
        }
    }

    return 0;
}