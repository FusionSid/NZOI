#include <bits/stdc++.h>

using std::cin, std::cout, std::string;
int main() {
    string data;
    getline(cin, data);

    int r_count = 0;
    for (auto i : data) {
        if (i == 'R') {
            r_count++;
        }
    }

    if (r_count == 2) {
        cout << "Dorothy is in the classroom.\n";
    } else if (r_count == 1) {
        cout << "Hop along Dorothy and find that other shoe.\n";
    } else {
        cout << "Maybe Dorothy is in Kansas.\n";
    }

    return 0;
}