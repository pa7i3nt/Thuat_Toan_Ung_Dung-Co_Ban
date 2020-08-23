#include <iostream>
using namespace std;
void phantich(long long a, long long b)
{

    if (b % a == 0 && b > 0 && a > 0)
    {
        cout << "1/" << b / a << endl;
        return;
    }
    
    long long n = b / a + 1;
    cout << "1/" << n << " + ";
    phantich(n * a - b, n * b);
}
int main()
{
    long long n, a, b;
    cin >> n;
    while (n--)
    {
        cin >> a >> b;
        phantich(a, b);
    }
}