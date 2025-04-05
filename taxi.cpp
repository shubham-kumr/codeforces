#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> groups(n);
    for (int i = 0; i < n; ++i) {
        cin >> groups[i];
    }

    int count[5] = {0}; // To count the number of groups of each size (1 to 4)
    for (int i = 0; i < n; ++i) {
        count[groups[i]]++;
    }

    int taxis = count[4]; // Groups of 4 need one taxi each

    // Groups of 3 can pair with groups of 1
    taxis += count[3];
    count[1] = max(0, count[1] - count[3]);

    // Two groups of 2 can share one taxi
    taxis += count[2] / 2;
    if (count[2] % 2 != 0) {
        taxis += 1;
        count[1] = max(0, count[1] - 2);
    }

    // Groups of 1 can share taxis, 4 per taxi
    taxis += (count[1] + 3) / 4;

    cout << taxis << endl;

    return 0;
}