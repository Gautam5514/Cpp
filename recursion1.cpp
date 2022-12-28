#include <iostream>
using namespace std;

void f(int *arr, int idx, int n)
{
    // base case
    if (idx == n)
        return;
    // self case
    cout << arr[idx] << "\n";
    // assume that
    f(arr, idx + 1, n);
}
int main()
{
    int n = 5;
    int arr[] = {6, 1, 9, 2, 3};
    f(arr, 0, n);
    return 0;
}