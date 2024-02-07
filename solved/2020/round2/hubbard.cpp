#include <bits/stdc++.h>

using std::cin, std::cout, std::string;
int main()
{
    int n, child;
    cin >> n;

    int child_counter = 10;
    for (int i = 0; i < n; i++)
    {
        cin >> child;
        child_counter += child;
    }
    cout << child_counter;

    if (child_counter != 10)
    {
        cout << child_counter << "\n";
        return 0;
    }

    cout << "She's got them all\n";
    return 0;
}