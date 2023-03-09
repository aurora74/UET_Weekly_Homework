#include <bits/stdc++.h>
using namespace std;

int search(int key, int *a, int low, int high) 
{
    if (low > high) return -1;
    int mid = (low + high) / 2;
    if (*(a + mid) == key) return mid;
    if (*(a + mid) > key) 
    return search(key, a, low, mid - 1);
    return search(key, a, mid + 1, high);
}

int main ()
{
    int a[10] = {1, 2, 4, 5, 40, 42, 44, 50, 102, 506};
    cout << search (5, a, 0, 9);

}