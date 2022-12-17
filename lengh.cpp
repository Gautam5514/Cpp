#include<iostream>
using namespace std;
int main()
{
    int breath,lenght;
    cout<<"Enter lenght:";
    cin>>lenght;
    cout<<"Enter breath";
    cin>>breath;
    if(lenght==breath)
    {
        cout<<"this is sqare:";
    }
    else{
        cout<<"This is not square:";
    }

 //  lenght==breath ? cout<<"this is  sqaure"<<endl : cout<<"this is not sqaure"<<endl;
    return 0;
}