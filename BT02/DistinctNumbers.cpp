#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    long b = 9999999;
    while (cin >> a)
    {
        if (a > 0 && a != b) 
        {
            cout << a << " " ;
            b = a;
        }
        if (a < 0) break;
    }
    cout << a;
}