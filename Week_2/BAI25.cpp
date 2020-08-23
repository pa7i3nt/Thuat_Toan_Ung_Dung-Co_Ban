#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        int arr[k + 1];
        arr[0] = 0;

        for (int i = 1; i <= k; i++)
            cin >> arr[i];

        int i = k;

        while (i > 0 && arr[i] == arr[i - 1] + 1) {
            arr[i] = n - k + i;
            i--;
        }

        arr[i]--;

        if (i <= 0)
            for (int j = 1; j <= k; j++)
                arr[j] = n - k + j;

        for (int j = 1; j <= k; j++)
            cout << arr[j] << " ";
        
        cout << '\n';
    }
    return 0;
}