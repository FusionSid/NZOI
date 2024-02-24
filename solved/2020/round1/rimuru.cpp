#include <bits/stdc++.h>

using std::cin, std::cout, std::string;
int main() {
    double bar, outpost, inn, d;
    cin >> bar >> outpost >> inn >> d;

    int nearest_bar = abs(round(d / bar) * bar - d);
    int nearest_outpost = abs(round(d / outpost) * outpost - d);
    int nearest_inn = abs(round(d / inn) * inn - d);

    int closest = std::min(std::min(nearest_bar, nearest_outpost), nearest_inn);

    int amount_of_min = 0;
    for (auto i : {nearest_bar, nearest_inn, nearest_outpost}) {
        if (i == closest) {
            amount_of_min++;
        }
    }
    cout << closest << "\n";
    if (amount_of_min != 1) cout << "can't make up my mind\n";

    return 0;
}