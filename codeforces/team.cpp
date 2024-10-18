#include<bits/stdc++.h>
using namespace std;

bool check(int n) {
    if(n==1) return true;
    return false;
}

int main() {
    int n;
    cin>>n;
    int solved = 0;
    while(n--) {
        int p, v, t;
        int count = 0;
        cin>>p>>v>>t;
        if(check(p)) {
            count++;
        }
        if(check(v)) {
            count++;
        }
        if(check(t)){
            count++;
        }
        if(count>=2) solved++;
    }
    cout<<solved;
}