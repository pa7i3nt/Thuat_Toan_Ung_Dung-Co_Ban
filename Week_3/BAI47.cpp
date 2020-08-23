#include <bits/stdc++.h>
using namespace std;

const int MAX_CHAR = 26;

int minValue(string s, int k) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int l = s.length();

    if (k >= l)
        return 0;

    int freq[MAX_CHAR] = {0};

    for (int i = 0; i < l; i++)
        freq[s[i] - 'a']++;

    priority_queue<int> q;
    for (int i = 0; i < MAX_CHAR; i++)
        q.push(freq[i]);

    while (k--) {
        int tmp = q.top();
        q.pop();
        tmp--;
        q.push(tmp);
    }    

    int res = 0;
    while (!q.empty()) {
        int tmp = q.top();
        res += tmp * tmp;
        q.pop();
    }

    return res;
}

int main() {
    int t, k;
    string s;
    cin >> t;
    while (t--) {
        cin >> k;
        cin >> s;
        cout << minValue(s, k) << "\n";
    }
    return 0;
}