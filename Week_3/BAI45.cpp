#include <bits/stdc++.h>
using namespace std;

long long result(long long arr[], int n)
{
    priority_queue<long long, vector<long long>,
                   greater<long long> > q(arr, arr + n);

    long long res = 0;

    while (q.size() > 1) {
        long long first = q.top();
        q.pop();
        long long second = q.top();
        q.pop();

        res += first + second;
        q.push(first + second);
    }

    return res;
}

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        long long arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        cout << result(arr, n) << "\n";
    }
    return 0;
}