#include <bits/stdc++.h>
using namespace std;
#define MAX 1000005
int a[MAX], b[MAX];

int main ()
{
    int n; cin >> n;
    int flag = 0;
    for (int i = 0; i < n; i ++)
        cin >> a[i];
    for (int i = 0; i < n + 1; i++)
        cin >> b[i];
    for (int j = 0; j < n + 1; j ++)
    {
        for (int i = 0; i < n; i ++)
        {
            if (b[j] == a[i]) flag ++;
        }
        if (flag == 0) 
        {
            cout << b[j] << endl;
            break;
        }
        flag = 0;
    }
}