#include <bits/stdc++.h>

using std::cin, std::cout, std::string;

int main() {
    int n, k, knife;
    int sum = 0;
    std::vector<int> knives;

    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> knife;
        knives.push_back(knife);
    }

    std::sort(knives.begin(), knives.end(), std::greater<int>());

    for (int i = 0; i < k; i++) sum += knives[i];
    cout << sum << '\n';

    return 0;
}