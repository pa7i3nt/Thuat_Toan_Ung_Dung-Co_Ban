#include <bits/stdc++.h>
using namespace std;

int calculate(string s) {
    int res = 0;

    for (int i = 0; i < s.length(); i++) {
        res = (res * 10 + (int)s[i] - '0') % 4;
    }
    return (res % 4) ? 0 : 4;
}

int main() {
    int t;
    string s;
    cin >> t;
    cin.ignore();
    while (t--) {
        cin >> s;
        cout << calculate(s) << '\n';
    }
    return 0;
}