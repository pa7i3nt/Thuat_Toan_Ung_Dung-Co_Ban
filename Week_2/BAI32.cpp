#include <bits/stdc++.h>
using namespace std;

bool arr[100000];
int n, p, s;

vector<int> tmp;
vector<vector<int> > res;

void Try(vector<int> v, int idx, int pos, int sum) {
    if (sum > s || idx > n)
        return;
    else if (sum == s && idx == n)
        res.push_back(tmp);

    for (int i = pos; i < v.size(); i++) {
        tmp.push_back(v[i]);
        Try(v, idx + 1, i + 1, sum + v[i]);
        tmp.pop_back();
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> p >> s;
        vector<int> v;
        tmp.clear();
        res.clear();

        for (int i = 0; i <= s; i++)
            arr[i] = true;
        arr[0] = false;
        arr[1] = false;

        // Sieve Of Eratosthenes
        for (int i = 2; i <= s; i++) {
            if (arr[i]) {
                for (int j = i * 2; j <= s; j += i)
                    arr[j] = false;
            }
        }

        for (int i = p + 1; i <= s; i++)
            if (arr[i])
                v.push_back(i);

        Try(v, 0, 0, 0);
        cout << res.size() << '\n';

        for (int i = 0; i < res.size(); i++) {
            for (int j = 0; j < res[i].size(); j++)
                cout << res[i][j] << " ";
            cout << '\n';
        }
    }
    return 0;
}