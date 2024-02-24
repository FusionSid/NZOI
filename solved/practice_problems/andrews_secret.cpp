#include <bits/stdc++.h>

using std::cin, std::cout, std::string;
int main() {
    int n;
    int min = 100000000;
    int max = -1;
    int total = 0;

    for (int i = 0; i < 100; i++) {
        cin >> n;
        min = std::min(min, n);
        max = std::max(max, n);
        total += n;
    }

    cout << min << " " << max << " " << total / 100;
    return 0;
}