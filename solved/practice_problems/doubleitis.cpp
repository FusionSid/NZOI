#include <bits/stdc++.h>

using std::cin, std::cout, std::string;
int main() {
    int n, m;
    cin >> n >> m;

    int actual_age = floor(n / 2);
    if (actual_age < m) {
        cout << "No";
    } else {
        cout << "Yes";
    }
    return 0;
}
