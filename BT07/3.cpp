#include <bits/stdc++.h>
using namespace std;

int count_even(int *a, int n)
{
    int cnt = 0;
    for (int *ptr = &a[0]; ptr <= &a[n - 1]; ptr ++)
    {
        if (*ptr % 2 == 0) cnt ++;
    } 
    return cnt;
}

int main ()
{
    int a[10] = {1, 2, 3, 6, 8, 10, 12, 7, 9,20};
    for (int i = 0; i < 5; i ++)
    {
        
    }
}