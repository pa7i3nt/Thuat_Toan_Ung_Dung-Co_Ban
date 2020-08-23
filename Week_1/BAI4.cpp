#include <bits/stdc++.h>
using namespace std;

bool binarySearch(string s, int l, int r) {
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (s[mid] > s[mid + 1] || s[mid] < s[mid - 1])
            return false;
        
        if (s[mid] <= s[mid + 1])
            return binarySearch(s, l, mid - 1);
        
        if (s[mid] >= s[mid - 1])
            return binarySearch(s, mid + 1, r);
    }
    return true;
}

int main() {
    int t;
    string s;
    cin >> t;
    while (t--) {
        cin >> s;
        if (s[0] > s[s.length() - 1])
            reverse(s.begin(), s.end());
            
        bool res = binarySearch(s, 0, s.length() - 1);
        (res == true) ? cout << "YES"
                      : cout << "NO";

        cout << '\n';
    }
    return 0;
}