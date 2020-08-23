#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

long long lcm(long long a, long long b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int t;
    long long a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        cout << gcd(a, b) << " " << lcm(a, b) << endl;
    }
    return 0;
}