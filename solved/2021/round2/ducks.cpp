#include <bits/stdc++.h>

using std::cin, std::cout, std::string;
int main()
{
    int s, m, l;
    cin >> s >> m >> l;

    int highest = std::max(s, std::max(m, l));

    int space_l = highest - l;
    int left_l = space_l != 1 ? std::floor(space_l / 2) : 0;
    int right_l = space_l - left_l;

    int space_m = highest - m;
    int left_m = space_m != 1 ? std::floor(space_m / 2) : 0;
    int right_m = space_m - left_m;

    int space_s = highest - s;
    int left_s = space_s != 1 ? std::floor(space_s / 2) : 0;
    int right_s = space_s - left_s;

    cout << string(left_l, '_') << string(l, 'L') << string(right_l, '_') << "\n";
    cout << string(left_m, '_') << string(m, 'M') << string(right_m, '_') << "\n";
    cout << string(left_s, '_') << string(s, 'S') << string(right_s, '_') << "\n";

    return 0;
}
