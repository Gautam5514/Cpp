/*100 – 90
90 – 80
80 – 70
70 – 60
60 – 50
50 – 40
40 – 30
30 – 0
A+
A
B+
B
C
D
E*/
#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter your marks:";
    cin>>marks;

    if(marks>=90){
        cout<<"your garde is A+";
    }
    else if(marks>=80){
        cout<<"your grade is A";
    }
    else if(marks>=70){
        cout<<"your grade is B+";
    }
    else if(marks>=60){
        cout<<"your grade is B";
    }
    else if(marks>=50){
        cout<<"your grade is C+";
    }
    else if(marks>=40){
        cout<<"your grade is C";
    }
    else if(marks>=30){
        cout<<"your grade is E";
    }
    else if(marks<=30) {
        cout<<"your grade is F";
    }
    else{
        cout<<"Enter valid number";
    }
    return 0;
}