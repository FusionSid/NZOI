#include <bits/stdc++.h>

using std::cin, std::cout, std::string;
int main() {
    int x, y, c, d;
    cin >> x >> y >> c >> d;

    int manhattan_dist = abs(x - c) + abs(y - d);
    cout << manhattan_dist * 2;

    return 0;
}
