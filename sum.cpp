#include<iostream>
using namespace std;
int main(){
    int num,sum;
    sum =0;
    cout<<"Enter the positive integer :";
    cin>>num;

    for(int i=1;i<=num;i++){
        sum = sum+i;
    }
    cout<<"Sum ="<<sum<<endl;
    return 0;
}