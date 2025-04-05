#include <iostream>
using namespace std;

int main() {
    int k, r;
    cin >> k >> r;

    for (int i = 1; i <= 1000; ++i) {
        int totalCost = i * k;
        if (totalCost % 10 == 0 || totalCost % 10 == r) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}