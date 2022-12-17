#include<iostream>
using namespace std;
int main()
{
    int sp,cp,amt;
    cout<<"Enter the cost price =";
    cin>>cp;
    cout<<"Enter the selling price=";
    cin>>sp;

    if(sp > cp){
        amt=sp-cp;
        cout<<"The profit is "<<amt;
    }
    else if(cp > sp){
        amt=cp-sp;
        cout<<"The loss is "<<amt;
    }
    else{
        cout<<"There is no loss and no profit"<<endl;
    }
    return 0;
}