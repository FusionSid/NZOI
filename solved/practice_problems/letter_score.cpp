#include <bits/stdc++.h>

using std::cin, std::cout, std::string;
int main() {
    int n, t;
    char letter;
    string phrase;
    std::vector<string> phrases;

    cin >> n;

    cin.ignore();

    for (int i = 0; i < n; i++) {
        getline(cin, phrase);
        phrases.push_back(phrase);
    }

    cin >> letter;

    for (auto p : phrases) {
        t = 0;
        for (auto c : p) {
            if (c == letter) t++;
        }
        cout << t << "\n";
    }

    return 0;
}