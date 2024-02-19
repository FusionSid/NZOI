#include <bits/stdc++.h>

using std::cin, std::cout, std::string;
int main()
{
    string password;
    cin >> password;
    std::reverse(password.begin(), password.end());
    cout << password;

    return 0;
}