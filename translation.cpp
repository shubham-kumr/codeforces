#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    string t;
    cin>>t;

    reverse(s.begin(), s.end());
    if(s == t) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
}