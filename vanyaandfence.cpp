#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, h;
    cin>>n>>h;
    int a = 0;
    for(int i = 0; i < n; i++) {
        int x;
        cin>>x;
        if(x > h) {
            a += 2;
        } else {
            a += 1;
        }
    }
    cout<<a<<endl;
}