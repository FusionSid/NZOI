#include <bits/stdc++.h>

using std::cin, std::cout, std::string;
int main() {
    int n;

    std::stack<char> paren;
    std::map<char, char> paren_map{{'(', ')'}, {'[', ']'}, {'{', '}'}};

    cin >> n;
    char curr;
    for (int i = 0; i < n; i++) {
        cin >> curr;
        if (curr == '(' || curr == '[' || curr == '{') {
            paren.push(curr);
        } else if (curr == ')' || curr == ']' || curr == '}') {
            if (paren.empty()) {
                cout << "NO\n";
                return 0;
            }
            char top = paren.top();
            char expected = paren_map[top];

            if (curr != expected) {
                cout << "NO\n";
                return 0;
            }

            paren.pop();
        }
    }

    if (!paren.empty()) {
        cout << "NO\n";
        return 0;
    }
    cout << "YES\n";
    return 0;
}
