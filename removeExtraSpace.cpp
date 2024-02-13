#include<iostream>
using namespace std;

string modify(string s) {
    string ans = ""; // this is the empty empty string
    int n = s.length();

    for(int i = 0; i < n; i++ ) { // traverse all the string
        if(s[i] != ' ')  // check if any of the characters is space then remove and push in the s[i] means empty box which is (ans)
            ans.push_back(s[i]);
    }
    return ans;
}

int main() {
    string input1 = "geeks  for  geeks";
    cout << modify(input1) << endl;

    string input2 = "         g    f     g";
    cout << modify(input2) << endl;

    string input3 = "mai  hu    k  o   n    pe   hachan    ";
    cout << modify(input3) << endl;

    return 0;
}