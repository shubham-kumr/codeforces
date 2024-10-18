#include<bits/stdc++.h>
using namespace std;

bool hq9plus(string s) {
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9') {
            return true;
        }
    }
    return false;
}

int main() {
    string s;
    cin>>s;
    if(hq9plus(s)) {
        cout<<"YES";
    } else {
        cout<<"NO";
    }
    return 0;
}