#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    int x1, y1, z1, x2, y2, z2, x3, y3, z3, x4, y4, z4;
    cin >> t;
    while (t--) {
        cin >> x1 >> y1 >> z1;
        cin >> x2 >> y2 >> z2;
        cin >> x3 >> y3 >> z3;
        cin >> x4 >> y4 >> z4;

        int a1 = x2 - x1;
        int b1 = y2 - y1;
        int c1 = z2 - z1;
        int a2 = x3 - x1;
        int b2 = y3 - y1;
        int c2 = z3 - z1;

        int a = b1 * c2 - b2 * c1;
        int b = a2 * c1 - a1 * c2;
        int c = a1 * b2 - b1 * a2;
        int d = (-a * x1 - b * y1 - c * z1);

        if (a * x4 + b * y4 + c * z4 + d == 0)
            cout << "YES";
        else 
            cout << "NO";
        
        cout << '\n';
    }
    return 0;
}