#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    string s;
    cin >> t;
    cin.ignore();
    while (t--) {
        cin >> s;
        int i = s.length() - 1;

        while (s[i] != '1' && i > 0) {
            s[i] = '1';
            i--;
        }

        if (s[i] == '1')
            s[i] = '0';
        else 
            s[i] = '1';

        for (int j = 0; j < s.length(); j++)
            cout << s[j];
        
        cout << '\n';
    }
    return 0;
}