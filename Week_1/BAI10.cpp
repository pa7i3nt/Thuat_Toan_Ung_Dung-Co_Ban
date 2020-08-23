#include <bits/stdc++.h>
using namespace std;

int convert(string s) {
    int res = 0;
    for (int i = 0; i < s.length(); i++) {
        res = res * 10 + (s[i] - '0');
    }
    return res;
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    for (int i = 0; i < s1.length(); i++)
        if (s1[i] == '6')
            s1[i] = '5';

    for (int i = 0; i < s2.length(); i++)
        if (s2[i] == '6')
            s2[i] = '5';

    int min = convert(s1) + convert(s2);

    for (int i = 0; i < s1.length(); i++)
        if (s1[i] == '5')
            s1[i] = '6';

    for (int i = 0; i < s2.length(); i++)
        if (s2[i] == '5')
            s2[i] = '6';

    int max = convert(s1) + convert(s2);

    cout << min << " " << max << '\n';
    
    return 0;
}