#include <bits/stdc++.h>
using namespace std;

int coins[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
int m = sizeof(coins) / sizeof(coins[0]);

void findMin(int money) {
    vector<int> ans;
    int res = 0;

    for (int i = m - 1; i >= 0; i--) {
        while (money >= coins[i]) {
            money -= coins[i];
            ans.push_back(coins[i]);
        }
    }

    for (int i = 0; i < ans.size(); i++)
        res++;

    cout << res << '\n';
}

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        findMin(n);
    }
    return 0;
}