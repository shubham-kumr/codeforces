#include<bits/stdc++.h>
using namespace std;

void football(string s) {
    int count = 0;
    for(int i= 0; i<s.size(); i++) {
        if(s[i]=='1') {
            count++;
            if(count==7) {
                cout<<"YES"<<endl;
                return;
            }
        }
        else {
            count = 0;
        }
    }
    count = 0;
    for(int i= 0; i<s.size(); i++) {
        if(s[i]=='0') {
            count++;
            if(count==7) {
                cout<<"YES"<<endl;
                return;
            }
        }
        else {
            count = 0;
        }
    }
    cout<<"NO"<<endl;
}

int main() {
    string s;
    cin>>s;
    football(s);
    return 0;
}