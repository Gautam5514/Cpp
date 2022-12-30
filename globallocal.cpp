#include<iostream>
using namespace std;

int g = 4;
void fun(){
    int x = 10;
    
    x ++;

    g++;

    cout<<x<<" "<<g<<endl;
}
int main(){
    cout<<g<<endl;
    fun();
    cout<<g<<endl;
    
}