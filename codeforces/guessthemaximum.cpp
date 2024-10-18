#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int n;
        std::cin >> n;

        std::vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            std::cin >> a[i];
        }
        int k;
        std::cin >> k;

        int max_k = a[0];
        int sum = a[0];
        for (int i = 1; i < n; i++)
        {
            sum+=a[i];
            max_k = std::max(max_k, sum);
        }

        if (max_k < k)
        {
            std::cout << max_k << std::endl;
        }
        else
        {
            std::cout << 0 << std::endl;
        }
    }
    return 0;
}