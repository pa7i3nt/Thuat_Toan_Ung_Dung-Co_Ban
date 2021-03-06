#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

const ll    maximum = LONG_LONG_MAX;
ll          p[20] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
ll          n, res = maximum;

void yeuTung(int i, ll a, int b) {
    if (b > n)
        return;
    
    if (b == n)
        res = min(res, a);
    
    for (int j = 1;; j++) {
        if (a * p[i] > res)
            break;
        
        a *= p[i];

        if (a < 0)
            break;
        
        yeuTung(i + 1, a, b * (j + 1));
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        res = maximum;
        cin >> n;
        yeuTung(0, 1, 1);
        cout << res << '\n';
    }
    return 0;
}