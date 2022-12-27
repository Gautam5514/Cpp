#include<iostream>

using namespace std;
void printfun(int test){
    if(test < 1){
        return;
    }
    else{
        cout<<test<<" ";
        printfun(test - 1);
        cout<<test<<" ";
        return ;
    }
}
int main(){
    int test = 3;
    printfun(test);
}