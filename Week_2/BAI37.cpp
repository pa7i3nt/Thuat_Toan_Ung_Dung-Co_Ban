#include <bits/stdc++.h>
using namespace std;

long long search(long long n, long long left,
                 long long right, long long k)
{
    long long mid = (left + right) / 2;

    if (k == mid)
        return n;

    if (k < mid)
        return search(n - 1, left, mid - 1, k);
    
    return search(n - 1, mid + 1, right, k);
}

int main() {
    int t;
    long long n, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        long long length = 1, tmp = 1;
        for (long long i = 1; i < n; i++) {
            length = length * 2 + 1;
            tmp++;
        }
        cout << search(tmp, 1, length, k) << '\n';
    }
    return 0;
}