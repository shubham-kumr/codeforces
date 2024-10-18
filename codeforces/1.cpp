#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxOddPrefixSum(const vector<int>& A) {
    int oddCount = 0, evenCount = 0;
    for (int num : A) {
        if (num % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    // The maximum number of odd prefix sums is the minimum of the number of odd elements and the number of even elements + 1
    return min(oddCount, evenCount + 1);
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
        cout << maxOddPrefixSum(A) << endl;
    }
    return 0;
}