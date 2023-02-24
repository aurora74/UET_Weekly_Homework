#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[10005];
    for (int i = 0; i < 5; i ++)
        cin >> a[i];
    sort(a, a + 5);
    cout << a[2];
}