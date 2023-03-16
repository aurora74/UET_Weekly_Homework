#include <bits/stdc++.h>
using namespace std;

struct Point
{
    double x;
    double y;
};

void print (Point &p)
{
    cout << "Khi truyen tham chieu: " << &p << " " << &(p.x) << " " << &(p.y) << endl;
}

void print_2 (Point p)
{
    cout << "Khi truyen tham tri: " << &p << " " <<  &(p.x) << " " << &(p.y) << endl;
}

int main ()
{
    Point p;
    cin >> p.x >> p.y;
    cout << "Dia chi cua bien: " << &p << " " << &(p.x) << " " << &(p.y) << endl;
    print(p);
    print_2(p);
    return 0;
}