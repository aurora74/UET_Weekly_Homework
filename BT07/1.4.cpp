#include <bits/stdc++.h>
using namespace std;

int main (int argc, const char *argv[])
{
    int a = 20, b = 25, *pG;
    {
        int g;
        pG = &g;
        g = gcd(a, b);
    }

    {
        int temp = 100;
        cout << temp << endl;
    }
    cout << a << " " << b << " " << *pG;
    return 0;
}