#include <bits/stdc++.h>

using std::cin, std::cout, std::string;
int main() {
    string toes[5];
    string toe;

    for (int i = 0; i < 5; i++) {
        cin >> toe;
        toes[i] = toe;
    }

    std::set<char> unique_letters(toes[0].begin(), toes[0].end());
    if (unique_letters.size() < toes[0].size()) {
        bool all_odd = true;
        for (int i = 1; i < 5; i++) {
            if (!(toes[i].size() & 1)) all_odd = false;
        }
        if (all_odd) {
            cout << "best";
            return 0;
        }
    } else {
        bool decreasing_length = (toes[1].size() > toes[2].size() &&
                                  toes[2].size() > toes[3].size() &&
                                  toes[3].size() > toes[4].size());
        if (decreasing_length) {
            cout << "ok";
            return 0;
        }
    }

    cout << "bad";
    return 0;
}
