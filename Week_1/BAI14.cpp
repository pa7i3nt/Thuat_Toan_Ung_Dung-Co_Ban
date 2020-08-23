#include <bits/stdc++.h>
using namespace std;

// tu so: numerator
// mau so: denominator

void fraction(long long tuso, long long mauso) {
    if (mauso == 0 || tuso == 0)
        return;
    
    if (mauso % tuso == 0) {
        cout << "1/" << (long long)(mauso / tuso) << '\n';
        return;
    }

    if (tuso > mauso) {
        cout << (long long)(tuso / mauso) << " + ";
        fraction((long long)(tuso % mauso), mauso);
        return;
    }

    long long n = (long long)(mauso / tuso) + 1;
    cout << "1/" << n << " + ";

    fraction((long long)(tuso * n) - mauso, (long long)(mauso * n));
}

int main() {
    int t;
    long long tuso, mauso;
    cin >> t;
    while (t--) {
        cin >> tuso >> mauso;
        fraction(tuso, mauso);
    }
    return 0;
}