#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a = 0;
    int b = 0;
    for(int i = 0; i < n; i++) {
        int x, y;
        cin>>x>>y;
        a -= x;
        a += y;
        b = max(b, a);
    }
    cout<<b<<endl;
}