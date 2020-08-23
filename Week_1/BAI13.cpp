#include <bits/stdc++.h>
using namespace std;

void solution(int s, int d)
{
    if (s == 0)
    {
        (d == 1) ? cout << "0\n"
                 : cout << "-1\n";
    
        return;
    }

    if (s > 9 * d) {
        cout << "-1\n";
        return;
    }

    int res[d];
    s -= 1;

    for (int i = d - 1; i > 0; i--) {
        if (s > 9) {
            res[i] = 9;
            s -= 9;
        }

        else {
            res[i] = s;
            s = 0;
        }
    }

    res[0] = s + 1;

    for (int i = 0; i < d; i++)
        cout << res[i];

    cout << '\n';
}

int main() {
    int t, s, d;
    cin >> t;
    while (t--) {
        cin >> s >> d;
        solution(s, d);
    }
    return 0;
}