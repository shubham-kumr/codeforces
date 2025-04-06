#include <iostream>
using namespace std;

void determineDivision(int rating) {
    if (rating <= 1399) {
        cout << "Division 4" << endl;
    } else if (rating <= 1599) {
        cout << "Division 3" << endl;
    } else if (rating <= 1899) {
        cout << "Division 2" << endl;
    } else {
        cout << "Division 1" << endl;
    }
}

int main() {
    int n;
    cin >> n; // Number of ratings
    for (int i = 0; i < n; ++i) {
        int rating;
        cin >> rating;
        determineDivision(rating);
    }
    return 0;
}