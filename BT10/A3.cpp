#include <bits/stdc++.h>
using namespace std;

struct Point
{
    double x;
    double y;
};

void print (Point v)
{
    cout << "(" << v.x << ", " << v.y << ")";
}

Point mid_point (Point const &a, Point const &b)
{
    Point res;
    res.x = (a.x + b.x) * 1.0 / 2;
    res.y = (a.y + b.y) * 1.0 / 2;
    return res;
};

int main ()
{
    Point a, b;
    cin >> a.x >> a.y >> b.x >> b.y;
    Point res = mid_point(a, b);
    print(res);
    return 0;
}