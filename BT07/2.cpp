#include <bits/stdc++.h>
using namespace std;

int check(int *a)
{
    return sizeof(a);
}

int main ()
{
    int a[5];
    cout << sizeof(a) << endl << check(a);
}