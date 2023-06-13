#include<iostream>
using namespace std;

class Parent{
    public:
    Parent(){
        cout<<"parent class"<<endl;
    }
};
class Child: public Parent{
    public:
    Child(){
        cout<<"parent class"<<endl;
    }
};
class GrandChild: public Child{
    public:
    GrandChild(){
        cout<<"Grand class"<<endl;
    }
};

int main(){
    GrandChild gc;
    return 0;
}