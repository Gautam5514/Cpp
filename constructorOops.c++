#include<iostream>
using namespace std;

class Ractangle{
    public:
    int l;
    int b;

    Ractangle(){ // default constructor- no agrgs passed
        l = 0;
        b = 0;
    }
    Ractangle(int x, int y){ // parametrized constructor - pass args
        l = x;
        b = y;
    }
    Ractangle(Ractangle& r){ // copy constructor- initilize an obj
        l = r.l;
        b = r.b;
    }
};

int main(){

    Ractangle r1;
    cout<<r1.l<<" "<<r1.b<<endl;

    Ractangle r2(3,4);
    cout<<r2.l<<" "<<r2.b<<endl;

    Ractangle r3 = r2;
    cout<<r3.l<<" "<<r3.b<<endl;

    return 0;
}