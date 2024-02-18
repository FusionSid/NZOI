#include <bits/stdc++.h>

using std::cin, std::cout, std::string;
int main()
{
    int n;
    while (true)
    {
        cin >> n;
        if (!n)
            break;

        int steps = 0;
        while (n != 1)
        {
            n = n & 1 ? (3 * n) + 1 : n / 2;
            steps++;
        }
        cout << steps << "\n";
    }
}
