#include<iostream>
using namespace std;

class Fruit{
    public:
    string name;
    string color;

};
int main(){
    Fruit apple; //object
    apple.name = "Apple";
    apple.color = "Red";
    cout<<apple.name<<"_"<<apple.color<<endl;

    Fruit *mango = new Fruit();
    mango->name = "mango";
    mango->color = "Yellow";
    cout<<mango->name<<"_"<<mango->color<<endl;
    return 0;
}