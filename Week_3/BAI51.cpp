#include <bits/stdc++.h>
using namespace std;

#define MAX 16

int n, bin[MAX], input[MAX][MAX], dem = 0;
int A[MAX], can, cmin, fopt;

int min_matrix() {
    int min = INT_MAX, i, j;
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            if (i != j && min > input[i][j])
                min = input[i][j];

    return min;
}

void init() {
    cin >> n;
    for (int j = 1; j <= n; j++)
        for (int k = 1; k <= n; k++)
            cin >> input[j][k];

    int i;
    cmin = min_matrix();
    fopt = INT_MAX;
    can = 0;
    A[1] = 1;

    for (i = 1; i <= n; i++)
        bin[i] = 1;
}

void updateRecord() {
    int sum;
    sum = can + input[A[n]][A[1]];
    if (sum < fopt)
        fopt = sum;
}

void Try(int i) {
    int j;
    for (j = 2; j <= n; j++) {
        if (bin[j]) {
            A[i] = j; bin[j] = 0;
            can += input[A[i - 1]][A[i]];
            if (i == n)
                updateRecord();
            else if (can + (n - i + 1) * cmin < fopt) {
                dem++;
                Try(i + 1);
            }
            bin[j] = 1;
            can -= input[A[i - 1]][A[i]];
        }
    }
}

int main() {
    init();
    Try(2);
    cout << fopt;
    return 0;
}