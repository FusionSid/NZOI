#include <bits/stdc++.h>

using std::cin, std::cout, std::string;
int main() {
    int unhealthy_c = 0;
    int resow_c = 0;
    bool resow = false;

    for (int i = 0; i < 3; i++) {
        int n;
        cin >> n;

        double sum = 0;

        for (int j = 0; j < n; j++) {
            int sat;
            cin >> sat;
            sum += sat;

            if (i == 0) resow_c += sat >= 25;
        }
        if (i == 0) resow = resow_c >= ((double)n / 2);

        double mean = sum / n;
        unhealthy_c += mean >= 12;
    }

    if (resow) {
        cout << "resow\n";
        return 0;
    }

    if (unhealthy_c == 3) {
        cout << "unhealthy\n";
        return 0;
    }

    cout << "healthy\n";

    return 0;
}