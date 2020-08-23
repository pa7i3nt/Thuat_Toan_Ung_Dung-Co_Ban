#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        int arr[k + 1];
        for (int i = 1; i <= k; i++)
            cin >> arr[i];

        int idx = k;

        while (arr[idx] == n - k + idx)
            idx--;

        if (arr[1] == n - k + 1) {
            for (int i = 1; i <= k; i++)
                cout << i << " ";
            cout << '\n';
        }
        
        else {
            arr[idx]++;

            for (int i = idx + 1; i <= k; i++)
                arr[i] = arr[i - 1] + 1;

            for (int i = 1; i <= k; i++)
                cout << arr[i] << " ";
            
            cout << '\n';
        }
    }
    return 0;
}