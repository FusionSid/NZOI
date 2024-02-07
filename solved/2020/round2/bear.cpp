#include <bits/stdc++.h>

using std::cin, std::cout, std::string;
int main()
{
    int n, t;
    cin >> n;

    int total_time = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> t;
        total_time += t;
    }

    int hours = floor(total_time / 60);
    int minutes = total_time % 60;

    cout << "It took ";
    if (hours)
    {
        cout << hours << " hour" << (hours > 1 ? "s" : "");
    }
    if (hours && minutes)
    {
        cout << " and ";
    }
    if (minutes)
    {
        cout << minutes << " minute" << (minutes > 1 ? "s" : "");
    }

    return 0;
}