#include<bits/stdc++.h>
using namespace std;
int main() {
    int num = 39124;
    int temp = num;
    int ans = 1;

    ans = temp % 10;
    temp / 10;
    ans *= temp % 10;
    temp / 10;

    while(temp > 0 ) {
        ans = (ans % 10) * (temp % 10);
        temp /= 10;
    }
    cout << "Product is " << ans << endl;
    return 0;
}