#include <bits/stdc++.h>
using namespace std;

int main()
{
    int min , max , step; 
    cin >> min >> max >> step;
    for (int i = min ; i <= max ;i += step)
    {
        cout << i << " " << setprecision(2) << fixed << (i - 32) * 5 * 1.0 / 9 << " " << (i - 32) * 5 * 1.0 / 9 + 273.15 << endl;
    }
}