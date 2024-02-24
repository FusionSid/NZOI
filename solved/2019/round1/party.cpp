#include <bits/stdc++.h>

const char order[] = {
    'G', 'C', 'E', 'P', 'L', 'S',
};

using std::cin, std::cout, std::map, std::string, std::array;
int main() {
    int n, k;

    cin >> n;
    cin >> k;
    cin.ignore();

    map<char, int> preference_count{{'G', 0}, {'C', 0}, {'E', 0},
                                    {'P', 0}, {'L', 0}, {'S', 0}};

    // get everyones preferences
    for (int _ = 0; _ < n; _++) {
        string input;
        getline(cin, input);

        char tea = input[input.length() - 1];
        preference_count[tea]++;
    }

    // get everyones stock count
    map<string, array<int, 6>> stocks;
    for (int _ = 0; _ < n; _++) {
        string name, input;
        array<int, 6> tea_stocks;

        cin >> name;
        for (int i = 0; i < 6; i++) {
            int c;
            cin >> c;
            tea_stocks[i] = c;
        }
        cin.ignore();

        stocks[name] = tea_stocks;
    }

    // go through each host
    for (int _ = 0; _ < k; _++) {
        string name;
        getline(cin, name);

        auto stock = stocks[name];
        int total_sad = 0;

        for (int i = 0; i < 6; i++) {
            auto people_prefer = preference_count[order[i]];
            auto amount_host_has = stock[i];
            auto diff = amount_host_has - people_prefer;

            if (diff < 0) {
                total_sad += abs(diff);
            }
        }

        if (total_sad == 0)
            cout << name << " Successful\n";
        else if (total_sad <= 2)
            cout << name << " Mildly Successful (" << total_sad << ")\n";
        else
            cout << name << " Disaster (" << total_sad << ")\n";
    }

    return 0;
}