#include <bits/stdc++.h>
using namespace std;

int print2largest(int arr[], int n)
{
    sort(arr, arr+n);
    int k = arr[n-1];
    for(int i = n-2; i>=0;i--)
    {
        if(arr[i]<k)
        {
            return arr[i];
        }
    }
    return -1;
}

int main()
{
    int heroGautam(int  arr[], int n)
    {
        return (arr, n);
    }
}

