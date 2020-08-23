#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    string s;
    cin >> t;
    cin.ignore();
    while (t--) {
        getline(cin, s);
        if ((s[0] - 48) + (s[4] - 48) == (s[8] - 48))
            cout << "YES";
        else 
            cout << "NO";
        
        cout << '\n';
    }
    return 0;
}