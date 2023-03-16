#include <bits/stdc++.h>
using namespace std;

struct Point
{
    double x;
    double y;
};

int main ()
{
    Point p;
    cin >> p.x >> p.y;
    cout << "Dia chi cua bien: " << &p << " " << &(p.x) << " " << &(p.y) << endl;
    return 0;
}