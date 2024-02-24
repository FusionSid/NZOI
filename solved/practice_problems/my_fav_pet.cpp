#include <bits/stdc++.h>

using std::cin, std::cout, std::string;
int main() {
    int max_pet = -1;
    int max_pet_index = 0;

    int n;
    for (int i = 0; i < 9; i++) {
        cin >> n;

        if (n > max_pet) {
            max_pet_index = i;
            max_pet = n;
        }
    }
    cout << "Pet " << max_pet_index + 1 << "\n";
    return 0;
}
