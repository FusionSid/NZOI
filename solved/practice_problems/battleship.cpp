#include <bits/stdc++.h>

using std::cin, std::cout, std::string;
int main() {
    std::set<std::pair<int, int>> coords;
    std::map<std::pair<int, int>, char> ships;
    std::map<char, int> lives;

    char cell;
    const int CHARS_IN_GRID = 100;

    int x = 0, y = 0;
    for (int i = 0; i < CHARS_IN_GRID; i++) {
        cin >> cell;

        if (cell != '#') {
            auto c = std::make_pair(x, y);
            coords.insert(c);

            if (lives.find(cell) == lives.end()) {
                lives[cell] = 0;
            }

            lives[cell]++;
            ships[c] = cell;
        }

        // update coords
        x = (x + 1) % 10;
        if (!x) y++;
    }

    while (true) {
        cin >> x >> y;
        if (x == -1) break;

        auto c = std::make_pair(x, y);
        if (coords.find(c) == coords.end()) {
            cout << "Miss\n";
            continue;
        };

        char ship = ships[c];
        if (!--lives[ship]) {
            cout << "Sunk " << ship << "\n";
            continue;
        };

        cout << "Hit " << ship << "\n";
    }

    return 0;
}
