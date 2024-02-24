#include <bits/stdc++.h>

using std::cin, std::cout, std::string;
int main() {
    string word1;
    string word2;

    getline(cin, word1);
    getline(cin, word2);

    std::sort(word1.begin(), word1.end());
    std::sort(word2.begin(), word2.end());

    bool is_anagram = word1 == word2;
    cout << (is_anagram ? "yes" : "no");

    return 0;
}