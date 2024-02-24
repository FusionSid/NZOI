#include <bits/stdc++.h>

const char order[] = {
    'G', 'C', 'E', 'P', 'L', 'S',
};

using std::cin, std::cout, std::map, std::string;
int main() {
    map<char, int> tea_count{{'G', 0}, {'C', 0}, {'E', 0},
                             {'P', 0}, {'L', 0}, {'S', 0}};

    while (true) {
        string input;
        std::getline(cin, input);

        if (input == "D") break;

        char tea = input[0];
        int amount = std::stoi(input.substr(2, input.length() - 2));
        tea_count[tea] += amount;
    }

    for (auto tea : order) cout << tea_count[tea] << (tea == 'S' ? "" : " ");

    return 0;
}