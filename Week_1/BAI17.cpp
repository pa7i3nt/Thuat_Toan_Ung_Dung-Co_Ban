#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int arr[n], res = 0;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        
        sort(arr, arr + n);
        for (int i = 0; i < n - 1; i++) {
            if (arr[i + 1] - arr[i] > 1)
                res += arr[i + 1] - arr[i] - 1;
        }

        cout << res << '\n';
    }
    return 0;
}