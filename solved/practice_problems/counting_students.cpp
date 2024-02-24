#include <bits/stdc++.h>

using std::cin, std::cout, std::string;
int main() {
    std::set<int> seen;
    std::set<int> duplicates;

    int n, x;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        if (seen.find(x) == seen.end()) {
            seen.insert(x);
            continue;
        }
        duplicates.insert(x);
    }

    for (auto i : duplicates) {
        cout << i << "\n";
    }

    return 0;
}