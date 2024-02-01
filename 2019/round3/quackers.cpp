#include <bits/stdc++.h>

using std::cin, std::cout, std::string;
int main()
{
    int s, d, c, p;
    cin >> s >> d >> c >> p;

    int per_day = d - c;
    cout << floor((double)(p - s) / per_day) << "\n";

    return 0;
}