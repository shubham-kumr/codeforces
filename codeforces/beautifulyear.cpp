#include <bits/stdc++.h>
using namespace std;

int beautifulyear(int n)
{
    while (true)
    {
        n++;
        int year = n;
        bool distinct = true;
        unordered_set<int> digits;

        while (year > 0)
        {
            int digit = year % 10;
            if (digits.count(digit) > 0)
            {
                distinct = false;
                break;
            }
            digits.insert(digit);
            year /= 10;
        }

        if (distinct)
        {
            return n;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    cout << beautifulyear(n) << endl;
    return 0;
}