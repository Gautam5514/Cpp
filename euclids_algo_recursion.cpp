#include <iostream>
using namespace std;

int gcd(int a, int b)
{

    if (b > a)
        return gcd(b, a);
    if (b == 0)// base case
        return a;

    return gcd(b, a % b);
}
int main()
{
    int x = gcd(48, 40);
    cout << x << "\n";
    return 0;
}