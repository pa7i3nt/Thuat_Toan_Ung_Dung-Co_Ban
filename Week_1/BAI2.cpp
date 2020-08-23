#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    string s;
    cin >> t;
    while (t--) {
        cin >> s;
        if (s[0] == s[s.length() - 1])
            cout << "YES";
        else 
            cout << "NO";
        
        cout << '\n';
    }
    return 0;
}