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

        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        
        cout << "\n";
    }
    return 0;
}