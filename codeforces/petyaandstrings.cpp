#include<bits/stdc++.h>
using namespace std;

int main() {
    string str1, str2;
    cin >> str1;
    cin >> str2;
    int result = 0;
    for(int i = 0; i < str1.size(); i++) {
        char c1 = tolower(str1[i]);
        char c2 = tolower(str2[i]);
        if(c1 < c2) {
            result = -1;
            break;
        } else if(c1 > c2) {
            result = 1;
            break;
        }
    }
    cout << result;
    return 0;
}