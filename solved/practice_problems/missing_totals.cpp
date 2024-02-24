#include <bits/stdc++.h>

using std::cin, std::cout, std::string;
int main() {
    int n, price, discount;
    cin >> n;

    int total = 0;
    for (int i = 0; i < n; i++) {
        cin >> price >> discount;
        if (price > discount) {
            total += price - discount;
        }
    }

    cout << total;

    return 0;
}