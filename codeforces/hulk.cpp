#include <bits/stdc++.h>    
using namespace std;

string hulk(int n) {
    string s = "";
    for(int i =1; i<=n; i++) {
        if(i%2==0) s+="I love ";
        else s+="I hate ";
        if(i!=n) s+="that ";
    }
    s+="it";
    return s;
}

int main() {
    int n;
    cin>>n;
    cout<<hulk(n)<<endl;
    return 0;
}