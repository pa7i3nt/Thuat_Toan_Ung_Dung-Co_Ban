#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int arr[n], flag = 0, res = 0;
        map<int, int> mp;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            mp[arr[i]]++;
        }
        
        for (int i = 0; i < n; i++) {
            if (mp.at(arr[i]) > 1) {
                res = arr[i];
                flag = 1;
                break;
            }
        }

        if (flag == 1)
            cout << res << '\n';
        else 
            cout << "NO\n";
    }

    return 0;
}