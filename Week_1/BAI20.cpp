#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, c, m;
    cin >> t;
    while (t--) {
        cin >> c >> m;
        if (c % (m + 1) == 0)
            cout << "Second\n";
        else 
            cout << "First\n";
    }
    return 0;
}