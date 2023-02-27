#include <bits/stdc++.h>
using namespace std;

bool checkReverse(string a, string b)
{
    reverse(a.begin(), a.end());
    if (b == a) return true;
    return false;
}

int main ()
{
    int n; cin >> n;
    string s[105];
    for (int i = 0; i < n; i ++)
        cin >> s[i];
    for (int i = 0; i < n - 1; i ++)
    {
        for (int j = i + 1; j < n; j ++)
        {
            if (checkReverse(s[i], s[j])) 
            {
                string temp = s[i];
                cout << temp.size() << " " << temp[temp.size() / 2]; 
            }
        }
    }
}