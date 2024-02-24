#include <bits/stdc++.h>
#define impossiblecheck         \
    if (state == 'N') {         \
        cout << "impossible\n"; \
        return 0;               \
    }

using std::cin, std::cout, std::string;
int main() {
    int n;
    char state, prev_state;

    cin >> n;
    cin >> prev_state;
    state = prev_state;

    for (int i = 0; i < n - 1; i++) {
        prev_state = state;
        cin >> state;

        switch (prev_state) {
            case 'S':
                impossiblecheck break;
            case 'E':
                if (state != 'N') {
                    cout << "impossible\n";
                    return 0;
                }
                break;
            case 'N':
                impossiblecheck break;
        }
    }
    cout << "plausible\n";
}