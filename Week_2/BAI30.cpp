#include <bits/stdc++.h>
using namespace std;

int n, sum, source[50], dem;
int res[50], tmp;

void output() {
    dem++;
    cout << "[";

    for (int i = 1; i < tmp; i++) {
        cout << res[i];
        if (i < tmp - 1)
            cout << " ";
    }

    cout << "]";
}

void Try(int i, int sum) {
    if (i <= n && sum == 0)
        output();

    while (i <= n && sum - source[i] >= 0) {
        res[tmp] = source[i];
        tmp++;

        Try(i, sum - source[i]);
        i++;
        tmp--;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        dem = 0;
        tmp = 1;

        cin >> n >> sum;

        for (int i = 1; i <= n; i++)
            cin >> source[i];

        for (int i = 1; i < n; i++) {
            for (int j = i + 1; j <= n; j++) {
                if (source[i] == source[j]) {
                    swap(source[j], source[n]);
                    --n;
                }
            }
        }

        sort(source + 1, source + 1 + n);

        if (sum < source[1]);
        
        else 
            Try(1, sum);

        if (!dem)
            cout << -1;
        
        cout << '\n';
    }
    return 0;
}