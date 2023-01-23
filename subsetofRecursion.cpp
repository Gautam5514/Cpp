#include<iostream>
#include<vector>
using namespace std;

void f(int *arr, int i, int n, int sum, vector<int>&result)
{
    if(i ==n)
    {
        result.push_back(sum);
        return;
    }
    f(arr, i+1, sum + arr[i], n, result );
    f(arr, i+1, sum, n, result );
}
int main()
{
    int arr[] = {2,4};
    int n = 2;
    vector<int>result;
    f(arr,n,0,0,result);
    for(int i = 0; i < result.size();i++)
    {
        cout<<result[i]<<" ";
    }
    return 0;
}