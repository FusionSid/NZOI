#define E elements
#define ce current_element
#include <bits/stdc++.h>

using std::cin, std::cout, std::string;

int main()
{
    int n, k;
    cin >> n;
    cin >> k;

    int elements[n];
    int current_element = 0;
    int consecutive = 0;

    int q;
    for (int i = 0; i < n; i++)
    {
        cin >> q;
        elements[current_element] = q;
        current_element++;

        if (q < k)
        {
            consecutive++;
        }
        else
        {
            consecutive = 0;
        }

        if (consecutive == 3)
        {
            break;
        }
    }

    if (consecutive != 3)
    {
        cout << "No Fault";
        return 0;
    }

    cout << "Fault Detected"
         << "\n"
         << E[ce - 3] << " " << E[ce - 2] << " " << E[ce - 1];

    return 0;
}
