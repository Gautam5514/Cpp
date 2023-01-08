#include <iostream>
using namespace std;

int pow_recursive(int p, int q)
{
    // base case
    if (q == 0)
        return 1;
    if (q % 2 == 0)
    {
        // if q is even
        int result = pow_recursive(p, q / 2);
        return result * result;
    }
}
int f(int n, int d)
{
    // base  case
    if (n == 0)
        return 0;
    return pow_recursive(n % 10, d) + f(n / 10, d);
}

int main()
{
    int n;
    cin >> n;

    int no_of_digits = 0;
    int temp = n;

    temp = temp / 10;
    no_of_digits++;
}
int result = f(n, no_of_digits);
if (result == n)
{
    cout << "YES";
}
else
{
    cout << "NO";
}
return 0;