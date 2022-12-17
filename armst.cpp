#include<iostream>
using namespace std;

int main(){

    cout<<"Armstrong no. between the range of 100 to 500  :";

    for(int i=100;i<500;i++){
        int sum =0;
        int t=i;
        while (t!=0)
        {
            sum =sum +((t%10)*(t%10)*(t%10));
            t=t/10;
        }
        if (sum==i)
        {
            cout<< i <<"\n";
        }
        
        
    }
    return 0;
}