
#include <bits/stdc++.h>

using std::cin, std::cout, std::string;

int find_smallest_rd(int target);
const int repdigits_precomputed[] = {
    1,         2,         3,         4,         5,         6,         7,
    8,         9,         11,        22,        33,        44,        55,
    66,        77,        88,        99,        111,       222,       333,
    444,       555,       666,       777,       888,       999,       1111,
    2222,      3333,      4444,      5555,      6666,      7777,      8888,
    9999,      11111,     22222,     33333,     44444,     55555,     66666,
    77777,     88888,     99999,     111111,    222222,    333333,    444444,
    555555,    666666,    777777,    888888,    999999,    1111111,   2222222,
    3333333,   4444444,   5555555,   6666666,   7777777,   8888888,   9999999,
    11111111,  22222222,  33333333,  44444444,  55555555,  66666666,  77777777,
    88888888,  99999999,  111111111, 222222222, 333333333, 444444444, 555555555,
    666666666, 777777777, 888888888, 999999999};

int main() {
    int n;
    cin >> n;

    std::vector<int> repdigits;

    while (n != 0) {
        auto r = find_smallest_rd(n);
        repdigits.push_back(r);
        n -= r;
    }

    cout << repdigits.size() << "\n";
    for (auto i : repdigits) {
        cout << i << "\n";
    }

    return 0;
}

int find_smallest_rd(int target) {
    int left = 0;
    int right = 80;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (repdigits_precomputed[mid] <= target) {
            result = repdigits_precomputed[mid];
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return result;
}