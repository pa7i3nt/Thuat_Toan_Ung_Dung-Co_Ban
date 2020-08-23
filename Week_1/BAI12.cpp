#include <bits/stdc++.h>
using namespace std;

string convert(long long n) {
    string s = "";
    while (n > 0) {
        s = char(n % 10 + '0') + s;
        n /= 10;
    }
    return s;
}

vector<string> resultCubes(long long n) {
    vector<string> cubes;
    for (long long i = 1; i * i * i <= n; i++) {
        long long cube_at_i_th = i * i * i;

        string res = convert(cube_at_i_th);
        cubes.push_back(res);
    }
    return cubes;
}

string solution(long long n) {
    vector<string> s1 = resultCubes(n);
    string s2 = convert(n);
    for (int i = s1.size() - 1; i >= 0; i--) {
        string tmp = s1[i];
        int idx = 0;
        for (int j = 0; j < s2.size(); j++) {
            if (s2[j] == tmp[idx])
                idx++;
        }

        if (idx == tmp.size())
            return tmp;
    }

    return "-1";
}

int main() {
    int t;
    long long n;
    cin >> t;
    while (t--) {
        cin >> n;
        cout << solution(n) << '\n';
    }
    return 0;
}