#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int> > ans;

int check(int n) {
    while (n != 0) {
        int t = n % 10;
        if (t == 1 || t == 4 || t == 6 ||
            t == 8 || t == 9 || t == 0)
                return false;
        
        n /= 10;
    }
    return true;
}

int search(vector<pair<int, int> > ans, int n) {
    for (int i = 0; i < ans.size(); i++) {
        if (ans[i].first == n)
            return i;
    }
    return -1;
}

int main() {
    int n;
    while (scanf("%d", &n) != -1) {
        if (n == -1)
            break;
        
        if (check(n)) {
            int i = search(ans, n);
            if (i == -1)
                ans.push_back({n, 1});
            
            else 
                ans[i].second++;
        }
    }

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i].first << " " << ans[i].second << '\n';
    
    return 0;
}