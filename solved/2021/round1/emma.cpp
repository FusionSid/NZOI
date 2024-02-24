#include <bits/stdc++.h>

using std::cin, std::cout, std::string;
int main() {
    std::map<string, int> sock_count(
        {{"Red", 0}, {"Pink", 0}, {"Purple", 0}, {"Blue", 0}});

    string sock;
    for (int i = 0; i < 7; i++) {
        cin >> sock;
        sock_count[sock]++;
    }

    for (auto &p : sock_count) {
        if (p.second & 1) {
            cout << p.first;
        }
    }

    return 0;
}