#include<iostream>
using namespace std;

int& fun(int &x){
    return x;
}
int main(){
    int a = 10;
    fun(25);
    xout<<a<<endl;
}