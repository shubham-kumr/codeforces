#include <iostream>
using namespace std;

int main() {
    int n, mishka = 0, chris = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int mi, ci;
        cin >> mi >> ci;
        if (mi > ci) mishka++;
        else if (mi < ci) chris++;
    }
    if (mishka > chris) cout << "Mishka" << endl;
    else if (chris > mishka) cout << "Chris" << endl;
    else cout << "Friendship is magic!^^" << endl;
    return 0;
}