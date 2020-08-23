#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    string s;
    cin >> t;
    cin.ignore();
    while (t--) {
        cin >> s;
        sort(s.begin(), s.end());

        do {
            cout << s << " ";
        } while (next_permutation(s.begin(), s.end()));

        cout << '\n';
    }
    return 0;
}