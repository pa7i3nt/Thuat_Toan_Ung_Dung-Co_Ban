#include <bits/stdc++.h>
using namespace std;

int n, s, arr[31], res = 100000;

void Try(int i, long long sum, int dem) {
    if (sum > s || dem > res)
        return;

    if (i == n) {
        if (sum == s)
            res = min(res, dem);
        return;
    }
    Try(i + 1, sum, dem);
    Try(i + 1, sum + arr[i], dem + 1);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        res = 100000;
        cin >> n >> s;
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        Try(0, 0, 0);

        if (res == 100000)
            cout << -1;
        else
            cout << res;

        cout << '\n';
    }   
    return 0;
}