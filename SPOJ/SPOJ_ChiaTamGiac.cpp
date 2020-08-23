#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    double n, h;
    cin >> t;
    while (t--) {
        cin >> n >> h;
        double res = h * (sqrt(n) / n);
        printf("%6f ", res);
        for (int i = 2; i < n; i++) {
            double x = i * 1.000000;
            res = h * (sqrt(x / n));
            printf("%6f ", res);
        }
        cout << '\n';
    }
    return 0;
}