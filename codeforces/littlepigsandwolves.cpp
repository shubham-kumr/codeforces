#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<char>> grid(n, vector<char>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    int eaten = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 'W') {
                if (i > 0 && grid[i - 1][j] == 'P') {
                    eaten++;
                } else if (i < n - 1 && grid[i + 1][j] == 'P') {
                    eaten++;
                } else if (j > 0 && grid[i][j - 1] == 'P') {
                    eaten++;
                } else if (j < m - 1 && grid[i][j + 1] == 'P') {
                    eaten++;
                }
            }
        }
    }

    cout << eaten << endl;

    return 0;
}