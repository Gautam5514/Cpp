#include<iostream>
using namespace std;

class Parent1{
    public: 
    Parent1(){
        cout<<"Parent1 Class"<<endl;
    }
};
class Parent2{
    public:
    Parent2(){
        cout<<"Parrent2 class"<<endl;
    }
};
class Child1: public Parent1{
    public:
    Child1(){
        cout<<"child1 class"<<endl;
    }
};
class Child2: public Parent2{
    public:
    Child2(){
        cout<<"child2 class"<<endl;
    }
};
class GrandChild: public Child1, public Child2{
    public:
    GrandChild(){
        cout<<"GrandChild class"<<endl;
    }
};

int main(){
    GrandChild c;
    return 0;
}