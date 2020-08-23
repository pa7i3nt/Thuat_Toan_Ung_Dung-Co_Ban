#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        int res = 0;
        cin >> n;
        if (n % 2 == 0)
            res++;
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                if (i % 2 == 0)
                    res++;
                if ((n / i) != i && (n / i) % 2 == 0)
                    res++;
            }
        }
        cout << res << '\n';
    }
    return 0;
}