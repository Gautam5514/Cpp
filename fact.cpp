#include<iostream>
using namespace std;

int main(){
    int j,number;
    cout<<"Enter any number \n";
    cin>>number;
     int fact=1;
    for(j=1;j<=number;j++){
        fact=fact*j;
    }
    cout<<"Factorial no."<<fact<<"\n";
    return 0;
}