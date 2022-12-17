#include<iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    cout<<"Enter the number";

    if(x<0)
    {
        x=x*(-1);
    }
    cout<<"The absolute is : "<<x<<endl;
    return 0;
}