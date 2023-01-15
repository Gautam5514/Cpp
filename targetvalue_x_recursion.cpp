#include<iostream>
using namespace std;

bool f(int *arr, int n, int i, int x)
{
    if (i == n)
    {
        return false;
    }
    return (arr[i]==x) || f(arr, n, i+1, x);
    
}

int main()
{
    int arr[] = {1,3,6,8,0,6,45,23};
    int n = 8;
    int x = 50;
    bool result = f(arr, n, 0, x);
    if (result)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
    
    
}