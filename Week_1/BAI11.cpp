#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int arr[n];
        long long tmp1 = 0, tmp2 = 0;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        
        sort(arr, arr + n);
        for (int i = 0; i < n; i++) {
            if (i & 1)
                tmp1 = tmp1 * 10 + arr[i];
            else 
                tmp2 = tmp2 * 10 + arr[i];
        }

        cout << tmp1 + tmp2 << '\n';
    }
    return 0;
}