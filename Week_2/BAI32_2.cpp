#include <bits/stdc++.h>
using namespace std;

int n, s, p;
vector<int> prime_list;
vector<int> arr_temp;
int arr[1000];

bool prime_number(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
void Try(int i, int sum, vector<int> temp)
{
    if (sum > s)
    {
        return;
    }
    if (sum == s && temp.size() == n)
    {
        for (int i = 0; i < temp.size(); i++)
        {
            arr_temp.push_back(temp[i]);
        }
        return;
    }
    for (int j = i; j < prime_list.size(); j++)
    {
        if (prime_list[i] && sum + prime_list[i] <= s && temp.size() < n)
        {
            temp.push_back(prime_list[j]);
            Try(j + 1, sum + prime_list[j], temp);
            temp.pop_back();
        }
    }
}
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        cin >> n >> p >> s;
        for (int i = p + 1; i <= 200; i++)
        {
            if (prime_number(i) == true)
            {
                prime_list.push_back(i);
            }
        }
        vector<int> temp;
        temp.clear();
        Try(0, 0, temp);
        cout << arr_temp.size() / n << endl;
        int count = 0;
        for (int i = 0; i < arr_temp.size(); i++)
        {
            cout << arr_temp[i] << " ";
            count++;
            if (count == n)
            {
                cout << endl;
                count = 0;
            }
        }
        arr_temp.clear();
        prime_list.clear();
    }
    return 0;
}