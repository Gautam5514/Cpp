#include<iostream>
using namespace std;

class Parent1{
    public:
    Parent1(){
        cout<<"Parent class"<<endl;
    }
};
class Parent2{
    public:
    Parent2(){
        cout<<"parent2 class"<<endl;
    }
};
class Child1: public Parent1{
    public:
    Child1(){
        cout<<"Child1 class"<<endl;
    }
};
class Child2: public Parent2{
    public:
    Child2(){
        cout<<"Child2 class"<<endl;
    }
};

int main(){
    Child1 c;
    return 0;
}