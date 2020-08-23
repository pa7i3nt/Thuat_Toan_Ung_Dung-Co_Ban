#include <bits/stdc++.h>
using namespace std;

int n, a[10000000] = {0}, check, k;
long long res;

void soChia()
{
    res = 0;
    for (int i = k; i >= 1; i--)
    {
        res += a[i] * pow(10, k - i);
    }
}

bool chiahet()
{
    soChia();
    if (res % n == 0)
        return 1;
    else
        return 0;
}

void init()
{
    a[1] = 9;
    for (int i = 2; i <= k; i++)
        a[i] = 0;
}

void Try()
{
    if (chiahet())
        check = 0;

    int i = k;
    while (check && a[i] == 9)
    {
        a[i] = 0;
        i--;
    }

    if (i < 1)
    {
        k++;
        init();
    }
    else
        a[i] = 9;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        check = 1;
        k = 1;
        cin >> n;
        init();
        while(check)
            Try();

        cout << res << '\n';
    }
    return 0;
}