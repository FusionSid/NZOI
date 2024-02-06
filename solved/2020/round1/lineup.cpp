#include <bits/stdc++.h>

using std::cin, std::cout, std::string;
int binary_search(std::vector<int> &toddy_club, int target);
int main()
{
    int n;
    cin >> n;

    std::vector<int> toddy_club;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        toddy_club.push_back(a);
    }

    std::sort(toddy_club.begin(), toddy_club.end());

    int wins_counter = 0;
    for (int i = 0; i < n; i++)
    {
        int b;
        cin >> b;
        int index = binary_search(toddy_club, b);
        if (index != -1)
        {
            wins_counter++;
            toddy_club.erase(toddy_club.begin() + index);
        }
    }
    cout << wins_counter;

    return 0;
}

int binary_search(std::vector<int> &toddy_club, int target)
{
    int low = 0;
    int high = toddy_club.size() - 1;
    int result = -1;

    while (low <= high)
    {
        int middle = low + (high - low) / 2;

        if (toddy_club[middle] > target)
        {
            result = middle;
            high = middle - 1;
        }
        else
        {
            low = middle + 1;
        }
    }

    return result;
}