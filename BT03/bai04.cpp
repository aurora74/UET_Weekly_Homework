#include <bits/stdc++.h> 
using namespace std;

int main ()
{
    int m, n; cin >> m >> n;
    char a[20][20];
    int bomb;

    for (int i = 0; i < m; i ++)
        for (int j = 0; j < n; j ++)
            cin >> a[i][j];

    for (int i = 0; i < m; i ++)
    {
        for (int j = 0; j < n; j ++)
        {
            if (a[i][j] == '*') cout << "* ";
            else 
            {
                bomb = 0;
                if (a[i - 1][j - 1] == '*') bomb ++;
                if (a[i - 1][j] == '*') bomb ++;
                if (a[i - 1][j + 1] == '*') bomb ++;
                if (a[i][j - 1] == '*') bomb ++;
                if (a[i][j + 1] == '*') bomb ++;
                if (a[i + 1][j - 1] == '*') bomb ++;
                if (a[i + 1][j] == '*') bomb ++;
                if (a[i + 1][j + 1] == '*') bomb ++;
                cout << bomb << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}