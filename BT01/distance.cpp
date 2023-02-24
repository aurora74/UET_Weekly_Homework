#include <bits/stdc++.h>

using namespace std;

int main()
{
	int x, y; cin >> x >> y;
	long long d = x * x + y * y;
	long double distance = sqrt(d);
	cout << setprecision(2) << fixed << distance;
}