#include <bits/stdc++.h>
using namespace std;

long long sumDigit(long long n) {
    int res = 0;
    while (n > 0) {
        res += n % 10;
        n /= 10;
    }
    return res;
}

void solution(long long n) {
    long long res = 0, check = sumDigit(n);
    while (n % 2 == 0) {
        res += sumDigit(2);
        n /= 2;
    }

    for (int i = 3; i <= sqrt(n); i = i + 2) {
        while (n % i == 0) {
            res += sumDigit(i);
            n /= i;
        }
    }

    if (n > 2)
        res += sumDigit(n);
    
    if (check == res)
        cout << "YES";
    else 
        cout << "NO";
    
    cout << '\n';
}

int main() {
    int t;
    long long n;
    cin >> t;
    while (t--) {
        cin >> n;
        solution(n);    
    }
    return 0;
}