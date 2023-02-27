#include <bits/stdc++.h>
using namespace std;
#define MAX 1000005
int a[MAX];

void solve()
{
    int n; cin >> n;
    int sum = 0, temp = 0;
    bool flag = false;

    for (int i = 0; i < n; i ++)
        cin >> a[i];
    for (int i = 0; i < n; i ++)
        sum += a[i];

    for (int i = 0; i < n; i ++)
    {
        if (2 * temp == sum - a[i])
        {
            cout << "YES" << endl;
            flag = true;
            break;
        }
        temp += a[i];
    }
    if (!flag) cout << "NO" << endl;
}

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        solve();
    }
}