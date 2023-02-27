#include <bits/stdc++.h> 
using namespace std;

int main ()
{
    string s; cin >> s;
    string s_reverse = s;
    reverse(s.begin(), s.end());
    if (s == s_reverse) cout << "YES";
    else cout << "NO";
    return 0;
}