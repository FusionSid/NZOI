#include <bits/stdc++.h>

using std::cin, std::cout, std::string;
int main() {
    int n, s, c;
    cin >> n >> s;
    for (int i = 0; i < n; i++) {
        cin >> c;
        if (c == s) {
            cout << i;
            break;
        }
    }
    return 0;
}
