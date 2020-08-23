#include <bits/stdc++.h>
using namespace std;

int isPossible(string s, int d) {
    map<char, int> freq;

    int max_freq = 0;

    for (int j = 0; j < s.length(); j++) {
        freq[s[j]]++;
        if (freq[s[j]] > max_freq)
            max_freq = freq[s[j]];
    }

    int res = s.length() / (d - 1);

    if (max_freq < res)
        return true;

    return false;
}

int main() {
    int t, d;
    string s;
    cin >> t;
    while (t--) {
        cin >> d;
        cin >> s;
        isPossible(s, d) ?  cout << 1 :
                            cout << -1;

        cout << "\n";                        
    }
    return 0;
}