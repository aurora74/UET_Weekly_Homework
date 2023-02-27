#include <bits/stdc++.h> 
using namespace std;

bool checkReverse(int a)
{
    string s = to_string(a);
    string s_reverse = s;
    reverse(s.begin(), s.end());
    if (s == s_reverse) return true;
    return false;
}

int main ()
{
    int tc; cin >> tc;
    while (tc --)
    {
        int x, y; cin >> x >> y;
        int cnt = 0;
        for (int i = x; i <= y; i ++)
        {
            if(checkReverse(i)) cnt ++;
        }
        cout << cnt << endl;
    }
    return 0;
}