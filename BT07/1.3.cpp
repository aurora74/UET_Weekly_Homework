#include <bits/stdc++.h>
using namespace std;

int* weird_sum(int a, int b)
{
    int c;
    c = a + b;
    return &c;
}
int main ()
{
    cout << weird_sum (2,3);
}