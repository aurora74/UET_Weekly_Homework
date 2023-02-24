#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, a[10005]; 
	cin >> n;
	for (int i = 0; i < n; i ++)
		cin >> a[i];

	int sum = 0;
	for (int i = 0; i < n; i ++)
		sum += a[i];
	
	int max = a[0];
	int min = a[0];
	for (int i = 0; i < n; i ++)
	{
		if (a[i] > max) max = a[i];
		if (a[i] < min) min = a[i];
	}

	cout << "Mean: " << sum * 1.0 / n << endl;
	cout << "Max: " << max << endl;
	cout << "Min: " << min;
}