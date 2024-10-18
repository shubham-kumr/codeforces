#include<bits/stdc++.h>
using namespace std;

string word(string s){
    if(s.length() > 10){
        return s[0] + to_string(s.length() - 2) + s[s.length() - 1];
    }
    return s;
}

int main(){
    int n;
    cin >> n;
    string s;
    for(int i = 0; i < n; i++){
        cin >> s;
        cout << word(s) << endl;
    }
    return 0;
}