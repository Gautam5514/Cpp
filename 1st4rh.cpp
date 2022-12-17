#include<iostream>
using namespace std;
int main()
{
    int n, first,second,third,fourth,sum;
    n=12345;
    first=n/10000;
    n=n%10000;
    second=n/1000;
    n=n%1000;
    third=n/100;
    n=n%100;
    fourth=n/10;
    n=n%10;
    sum= first+fourth;
    cout<<"sum of first and fourth number:"<<sum<<endl;
    return 0;

}