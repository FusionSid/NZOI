#include <bits/stdc++.h>

using std::cin, std::cout, std::string;
int main()
{
    const char operators[] = {'+', '-', 'x'};

    int curr_idx = 0, total, n, x;

    cin >> n;
    cin >> x;

    total = x;

    for (int i = 0; i < n - 1; i++)
    {
        cin >> x;
        switch (operators[curr_idx])
        {
        case '+':
            total += x;
            break;

        case '-':
            total -= x;
            break;

        case 'x':
            total *= x;
            break;
        }

        curr_idx = (curr_idx + 1) % 3;
    }

    cout << total << "\n";

    return 0;
}