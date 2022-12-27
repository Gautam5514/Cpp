#include<iostream>
using namespace std;

int main(){
    int array [] = {2,7,11,15};
    int target = 9;

    int size = 4;
    int pairs = 0;
    for ( int i = 0; i < size; i++){
        for (int j = i+1; j < size; j++){

            if (array [i] + array [j] == target){
                pairs++;
            }
        }
        cout<<pairs<<endl;
    }
    
    return 0;
}