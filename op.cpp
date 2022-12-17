//r (+, -, *, /)
#include<iostream>
using namespace std;
int main()
{
    char op;
    int num1,num2;
    cout<<"Enter the operator:";
    cin>>op;
    cout<<"Ente rthe two number:";
    cin>>num1>>num2;

    switch (op)
    {
        case '+':
             cout<<num1<<"+"<<num2<<"="<<num1+num2;
            break;
        case '-':
             cout<<num1<<"-"<<num2<<"="<<num1-num2;
            break;
        case '*':
            cout<<num1<<"*"<<num2<<"="<<num1*num2;
            break;
        case '/':
            cout<<num1<<"/"<<num2<<"="<<num1/num2;
            break;
    
        default:
            cout<<"out of operator:";
            break;
    }
    return 0;
}
