#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

long long pow(long long n, long long k) {
    if (k == 0)
        return 1;

    long long x = pow(n, (k / 2));

    if (k % 2 == 0)
        return x * x % MOD;

    return n * (x * x % MOD) % MOD;
}

long long res(long long n) {
    long long rev = 0, tmp = n;
    while (tmp != 0) {
        rev = rev * 10 + tmp % 10;
        tmp /= 10;
    }

    return pow(n, rev);
}

int main() {
    int t;
    long long n;
    cin >> t;
    while (t--) {
        cin >> n;
        cout << res(n) << '\n';
    }
    return 0;
}