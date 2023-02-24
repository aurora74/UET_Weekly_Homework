#include <bits/stdc++.h>
using namespace std;

int fibo(int n)
{
    if (n == 1 || n == 2) return 1;
    return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    int n; cin >> n;
    bool flag = false;
    int i = 1;
    while (fibo(i) <= n)
    {
        i ++;
        if (fibo(i) == n) flag = true;
    }
    if (flag) cout << "Thuoc day Fibonacci" << endl;
    else cout << "Khong thuoc day Fibonacci" << endl;

    for (int j = 1; j < i; j ++)
        cout << fibo(j) << " ";
}