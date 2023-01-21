#include <iostream>
#include <vector>
using namespace std;

void f(int *arr, int i, int n, int sum, vector<int> &result)
{
    // base case
    if (i == n)
    {
        result.push_back(sum);
        return;
    }
    f(arr, i + 1, n, sum + arr[i], result);
    f(arr, i + 1, n, sum, result);
}

int main()
{
    int arr[] = {4, 6, 8};
    int n = 3;
    vector<int> result;
    f(arr, n, 0, 0, result);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}