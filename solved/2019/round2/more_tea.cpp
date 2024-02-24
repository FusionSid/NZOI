#include <bits/stdc++.h>

using std::cin, std::cout, std::string;

const string TEAS[] = {"Ginger",     "Chamomile", "Earl Gray",
                       "Peppermint", "Lemon",     "Strawberry"};
const int BAGS_IN_CARTON = 24 * 10;

int main() {
    for (auto tea : TEAS) {
        int cartons;
        cin >> cartons;
        cout << tea << " " << cartons * BAGS_IN_CARTON << "\n";
    }

    return 0;
}