#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int *ptr = &a[n - 1];
    while (1)
    {
        cout << *ptr << ' ';
        if (ptr == a)
            break;
        ptr--;
    }
    return 0;
}