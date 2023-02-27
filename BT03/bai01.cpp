#include <bits/stdc++.h> 
using namespace std;
#define MAX 1000005

int main ()
{
    int n; cin >> n;
    int a[10001];
    bool seen[MAX];
    bool flag = true;

    for (int i = 0; i < n; i ++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        seen[a[i]] = false;

    for (int i = 0; i < n; i++)
    {
        if (!seen[a[i]]) seen[a[i]] = true;
        else flag = false;
    }
    if (flag) cout << "No"; 
    else cout << "Yes";
    return 0;
}