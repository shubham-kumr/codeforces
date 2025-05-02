#include <iostream>
#include <vector>
using namespace std;

int findSpyIndex(const vector<int>& arr) {
    if (arr[0] == arr[1]) {
        for (int i = 2; i < arr.size(); i++) {
            if (arr[i] != arr[0]) {
                return i + 1;
            }
        }
    } else {
        return (arr[0] == arr[2]) ? 2 : 1;
    }
    return -1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << findSpyIndex(arr) << endl;
    }
    return 0;
}