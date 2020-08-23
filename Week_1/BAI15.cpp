#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr, arr + n);

        if (n % 2 == 0) {
            for (int i = 0, j = n - 1; i < n / 2, j >= n / 2; i++, j--)
                cout << arr[j] << " " << arr[i] << " ";
            cout << '\n';
        }

        else {
            for (int i = 0, j = n - 1; i < (int)(n / 2), j > (int)(n / 2); i++, j--)
                cout << arr[j] << " " << arr[i] << " ";
            cout << arr[(int)(n / 2)] << '\n';
        }
    }
    return 0;
}