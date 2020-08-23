#include <bits/stdc++.h>
using namespace std;

typedef vector<vector<long long> > Matrix;
const int M = 1e9 + 7;

long long n, k;

Matrix nhanMaTran(Matrix mat1, Matrix mat2)
{
    Matrix tmp;
    tmp.resize(n);

    for (int i = 0; i < n; i++)
    {
        tmp[i].resize(n);
        for (int j = 0; j < n; j++)
        {
            tmp[i][j] = 0;
            for (int k = 0; k < n; k++) 
            {
                tmp[i][j] = (tmp[i][j] % M +
                            ((mat1[i][k] % M) * (mat2[k][j] % M)) % M) % M;
            }
        }
    }
    return tmp;
}

Matrix matPower(Matrix originalMat, long long k) {
    if (k == 1)
        return originalMat;

    Matrix tmp = matPower(originalMat, k / 2);

    if (k % 2 == 0)
        return nhanMaTran(tmp, tmp);
    
    else 
        return nhanMaTran(nhanMaTran(tmp, tmp), originalMat);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> k;

        Matrix originalMat;
        originalMat.resize(n);

        for (int i = 0; i < n; i++) {
            originalMat[i].resize(n);
            for (int j = 0; j < n; j++) {
                cin >> originalMat[i][j];
            }
        }

        Matrix res = matPower(originalMat, k);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
                cout << res[i][j] << ' ';
            cout << '\n';
        }
    }
    return 0;
}