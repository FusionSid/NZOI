#include <bits/stdc++.h>

using std::cin, std::cout;
int main() {
    int n;
    cin >> n;

    // using 1 + 2 + ... + n = n(n+1) / 2 (the triangle number)
    int platforms = ((n - 1) * (n)) / 2;
    // s(n) = 1n^2 + 1n (as it is a quadratic sequence)
    int struts = pow(n, 2) + n;

    cout << platforms + struts;

    return 0;
}