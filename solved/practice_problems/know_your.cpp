#include <bits/stdc++.h>

using std::cin, std::cout, std::string;
int main()
{
    int n, s;
    string line, token;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> s;
        int numbers[s][3];

        for (int j = 0; j < s; j++)
        {
            cin >> line;
            int index = 0;
            line.erase(line.begin()); // remove the prefix #

            std::stringstream ss(line);
            while (getline(ss, token, '-'))
            {
                numbers[j][index] = std::stoi(token);
                index++;
            }
        }

        int pounds, shillings, pence;
        int total_in_pence = 0;
        for (int l = 0; l < s; l++)
        {
            pounds = numbers[l][0];
            shillings = numbers[l][1];
            pence = numbers[l][2];

            total_in_pence += (pence + (shillings * 12) + ((pounds * 20) * 12));
        }

        shillings = floor(total_in_pence / 12);
        pence = total_in_pence % 12;

        pounds = floor(shillings / 20);
        shillings = shillings % 20;

        cout << "#" << pounds << "-" << shillings << "-" << pence << "\n";
    }
}
