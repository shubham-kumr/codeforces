#include<bits/stdc++.h>
using namespace std;

int horseshoes(vector<int>shoes) {
    sort(shoes.begin(), shoes.end());
    int count = 0;
    for(int i = 0; i<3; i++) {
        if(shoes[i]==shoes[i+1]) count++;
    }
    return count;
}

int main() {
    vector<int>shoes(4);
    for(int i = 0; i< 4; i++) 
    cin>>shoes[i];
    cout<<horseshoes(shoes)<<endl;
    return 0;
}