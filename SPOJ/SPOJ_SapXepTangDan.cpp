#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

long long binomialCoefficient(int n, int k)
{
    long long C[k + 1];
    memset(C, 0, sizeof(C));

    C[0] = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = min(i, k); j > 0; j--) {
            C[j] = C[j] + C[j - 1];
            C[j] = C[j] % MOD;
        }
    }

    return C[k];
}

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << binomialCoefficient(n + 9, 9) << '\n';
    }
    return 0;
}