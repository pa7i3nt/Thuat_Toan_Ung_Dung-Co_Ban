#include <bits/stdc++.h>
using namespace std;

int source[20][20], visited[20][20] = {0}, res[101] = {0};
int n, tmp, kiemtra;

void output() {
    for (int i = 1; i <= 100; i++) {
        if (res[i] == 1) cout << "D";
        if (res[i] == 2) cout << "L";
        if (res[i] == 3) cout << "R";
        if (res[i] == 4) cout << "U";
    }
    cout << " ";
}

void process(int x, int y) {
    // D
    if (x < n && source[x + 1][y] == 1 && visited[x + 1][y] == 0) {
        res[tmp++] = 1;
        visited[x + 1][y] = 1;
        process(x + 1, y);
        res[--tmp] = 0;
        visited[x + 1][y] = 0;
    }

    // L
    if (y > 1 && source[x][y - 1] == 1 && visited[x][y - 1] == 0) {
        res[tmp++] = 2;
        visited[x][y - 1] = 1;
        process(x, y - 1);
        res[--tmp] = 0;
        visited[x][y - 1] = 0;
    }

    // R
    if (y < n && source[x][y + 1] == 1 && visited[x][y + 1] == 0) {
        res[tmp++] = 3;
        visited[x][y + 1] = 1;
        process(x, y + 1);
        res[--tmp] = 0;
        visited[x][y + 1] = 0;
    }

    // U
    if (x > 1 && source[x - 1][y] == 1 && visited[x - 1][y] == 0) {
        res[tmp++] = 4;
        visited[x - 1][y] = 1;
        process(x - 1, y);
        res[--tmp] = 0;
        visited[x - 1][y] = 0;
    }

    if (x == n && y == n) {
        output();
        kiemtra++;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        visited[1][1] = 1;
        tmp = 1, kiemtra = 0;

        cin >> n;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                cin >> source[i][j];
        
        if (source[1][1] == 0 || source[n][n] == 0);

        else 
            process(1, 1);

        if (!kiemtra)
            cout << -1;
        
        cout << '\n';
    }
    return 0;
}