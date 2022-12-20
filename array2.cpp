#include<iostream>
using namespace std;

int square(int num){
    int sqr = num*num;
    return sqr;
}
int main(){
    for(int i = 1; i <= 10;i++){
        cout<<square(i)<<" ";
    }
}
