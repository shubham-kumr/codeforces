#include<bits/stdc++.h>
using namespace std;

string answer(string a, string b) {
    string ans;
    for(int i = 0; i<a.size(); i++) {
        if(a[i]==b[i]) ans+="0";
        else ans+="1";
    }
    return ans;
}

int main() {
    string a,b;
    cin>>a>>b;
    cout<<answer(a,b)<<endl;
    return 0;
}