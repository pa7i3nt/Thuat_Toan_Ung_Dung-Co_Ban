#include <bits/stdc++.h>
using namespace std;

int stop = 0, arr[15], n, dem, k;

void init() {
    cin >> n;
    k = 1;
    dem = 0;
    arr[k] = n;
}

void print() {
    cout << '(';
    for (int i = 1; i <= k; i++) {
        if (i < k)
            cout << arr[i] << " ";
        else 
            cout << arr[i];
    }

    cout << ") ";
}

void process() {
    int i, j, R, S, D;
    i = k;

    while (i > 0 && arr[i] == 1)
        i--;

    if (i > 0) {
        arr[i]--;
        D = k + 1 - i;
        R = D / arr[i];
        S = D % arr[i];
        k = i;

        if (R > 0) {
            for (j = i + 1; j <= i + R; j++)
                arr[j] = arr[i];
            
            k = k + R;
        }

        if (S > 0) {
            k++;
            arr[k] = S;
        }
    }

    else 
        stop = 1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        init();
        stop = 0;
        while (!stop) {
            print();
            process();
        }
        cout << '\n';
    }

    return 0;
}