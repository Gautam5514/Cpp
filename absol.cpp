#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter th value is:";
    cin>>x;

    if(x<0){
        x=x*(-1);
    }
    cout<<"Absolute value is ="<<x<<endl;
    return 0;
}