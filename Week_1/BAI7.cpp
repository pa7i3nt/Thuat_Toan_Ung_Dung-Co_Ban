#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    long long a, b, c, d, e, f;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c >> d >> e >> f;
        long long tmp = a * b + c * d + e * f;
        long long tmp_2 = sqrt(tmp);
        if (tmp_2 * tmp_2 != tmp)
            cout << "NO\n";
        else {
            if (a > b)
                swap(a, b);
            if (c > d)
                swap(c, d);
            if (e > f)
                swap(e, f);
            if ((b == d) && (d == f) && (f == tmp_2) &&
                (a + c + e == tmp_2))
                    cout << "YES\n";
            else {
                if (d == tmp_2) {
                    swap(a, c);
                    swap(b, d);
                }

                if (f == tmp_2) {
                    swap(a, e);
                    swap(b, f);
                }

                if (b == tmp_2) {
                    a = tmp_2 - a;
                    if ((a == c && a == e) || (a == c && a == f) || 
                        (a == d && a == e) || (a == d && a == f))
                            cout << "YES\n";
                    else 
                        cout << "NO\n";
                }

                else
                    cout << "NO\n";
            }
        }
    }
    return 0;
}