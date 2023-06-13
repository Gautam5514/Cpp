#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;
string longestCommonPrefix(vector<string>& str){
    //sorting the array of string
    sort(str.begin(),str.end());
    string s1 = str[0];
    int i = 0;
    string s2 = str[0];
    int j = 0;
    string ans = "";
    while(i<s1.size() && j<s2.size()){
        if(s1[i]==s2[j]){
            ans+=s1[i];
            i++;j++;
        }
        else{
            break;
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter no of string:";
    cin>>n;
    cout<<"Enter string";
    vector<string> str(n);
    for(int i = 0; i<n; i++){
        cin>>str[i];
    }
    cout<<"longestCommonPrefix: "<<longestCommonPrefix(str)<<endl;
}