#include<bits/stdc++.h>
using namespace std;

float volume(vector<int> orangejuice, int n) {
    float vol = 0;
    for(int i = 0; i < n; i++)
        vol += orangejuice[i];

    float fraction = (vol / n);
    return fraction;
}

int main() {
    int n;
    cin >> n;
    vector<int> orangejuice(n);
    for(int i = 0; i < n; i++)
        cin >> orangejuice[i];

    cout<<fixed << setprecision(12) << volume(orangejuice, n) << endl;
    return 0;
}