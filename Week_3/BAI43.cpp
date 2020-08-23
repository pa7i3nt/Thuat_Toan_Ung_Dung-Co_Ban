#include <bits/stdc++.h>
using namespace std;

long long res(string s) {
    int tmp = 1, res = 0;
    for (int i = s.size() - 1; i >= 0; i--) {
        res += tmp * (int)(s[i] - '0');
        tmp *= 2;
    }
    return res;
}

int main() {
    int t;
    string s1, s2;
    cin >> t;
    while (t--) {
        cin >> s1 >> s2;
        cout << res(s1) * res(s2) << '\n';
    }
    return 0;
}