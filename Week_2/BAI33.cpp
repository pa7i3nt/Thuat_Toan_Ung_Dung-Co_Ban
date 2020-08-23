#include <bits/stdc++.h>
using namespace std;

int a[9][9], sum, tmp;
int col[50], xuoi[50], nguoc[50];

void Try(int i) {
    for (int j = 1; j <= 8; j++) {
        if (!col[j] && !xuoi[i - j + 8] && !nguoc[i + j - 1]) {
            tmp += a[i][j];
            col[j] = 1;
            xuoi[i - j + 8] = 1;
            nguoc[i + j - 1] = 1;

            if (i == 8) {
                if (tmp >= sum)
                    sum = tmp;
            }

            else Try(i + 1);

            col[j] = 0;
            xuoi[i - j + 8] = 0;
            nguoc[i + j - 1] = 0;
            tmp -= a[i][j];
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        tmp = 0; sum = 0;
        for (int i = 1; i <= 8; i++)
            for (int j = 1; j <= 8; j++)
                cin >> a[i][j];

        Try(1);
        cout << sum << '\n';
    }
    
    return 0;
}