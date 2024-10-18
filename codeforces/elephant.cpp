#include<bits/stdc++.h>
using namespace std;

int elephant(int x) {
    if(x % 5 == 0) {
        return x / 5;
    } else {
        return x / 5 + 1;
    }
}

int main() {
    int x;
    cin >> x;
    cout << elephant(x) << endl;
    return 0;
}