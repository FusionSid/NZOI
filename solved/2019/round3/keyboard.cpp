#include <bits/stdc++.h>
#define START_CHAR 65

using std::cin, std::cout, std::string;
int main() {
    string s;
    cin >> s;

    int minkp = s.length();
    s = (char)START_CHAR + s;

    for (size_t i = 0; i < s.length() - 1; i++) {
        int cc = s[i] - START_CHAR;
        int nc = s[i + 1] - START_CHAR;

        int x_distance = abs(nc - cc);
        int y_distance = 26 - x_distance;
        minkp += std::min(x_distance, y_distance);
    }

    cout << minkp;
    return 0;
}