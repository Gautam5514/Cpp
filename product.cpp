#include<iostream>

using namespace std;

int main(){

    int num1, num2;
    cin>>num1>>num2;

    int *ptr= &num1;
    int *ptr2= &num2;

    int product= *ptr * *ptr2;
    cout<<product;
    return 0;
}