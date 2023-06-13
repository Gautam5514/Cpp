#include<iostream>
using namespace std;

class Sum{
    public:
    void add(int x, int y){
        int Sum = x+y;
        cout<<Sum<<endl;
    }
    void add(int x, int y, int z){
        int Sum = x+y+z;
        cout<<Sum<<endl;
    }
    void add(float x, float y){
        float Sum = x+ y;
        cout<<Sum<<endl;
    }
};
int main(){
    Sum s;
    s.add(2,3);
    s.add(2,3,4);
    s.add(float(2.5), float(5.6));
    return 0;
}