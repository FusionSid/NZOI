#include <bits/stdc++.h>

using std::cin, std::cout, std::string;
int main()
{
    std::map<string, int> card_values({{"J", 10}, {"Q", 11}, {"K", 12}, {"A", 13}});
    std::map<string, int> suit_values({{"spades", 0}, {"clubs", 1}, {"diamonds", 2}, {"hearts", 3}});

    string card, suit;

    getline(cin, card);
    getline(cin, suit);

    int suit_value = suit_values[suit];
    int card_value;

    try
    {

        card_value = std::stoi(card) - 1;
    }
    catch (std::invalid_argument const &)
    {
        card_value = card_values[card];
    }

    cout << 52 - (13 * suit_value) - card_value;
    return 0;
}
