#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the first number:";
    cin>>a;
    cout<<"Enter the second number:";
    cin>>b;
    cout<<((a<50)&&(a<b))? 1:0;
    return 0;
}