#include<iostream>
#include<vector>
using namespace std;

bool checkIdenticalBSTsHelper(vector<int>& v1, vector<int>& v2, int a1, int a2, int minValue, int maxValue){
    
    //find the first element in v1 within the range
    int i;
    for(i = a1; i <v1.size(); i++){
        if(v1[i] > minValue && v1[i] < maxValue)  break;
    }
    //find the first element in v2 within the range
    int j;
    for(j = a2; j < v2.size(); j++){
        if(v2[j] > minValue && v2[j] < maxValue) break;
    }

    //if no element is found within the range(leaf nodes)
    if(i == v1.size() && j == v2.size()) return true;

    //if only one vector does not have elements within the range
    if((i == v1.size() && j != v2.size()) || (i != v1.size() && j == v2.size())){
        return false;
    }

    //check if both elements are equal
    if(v1[i] != v2[j]) return false;

    //recursively check for left and right subtree
    return checkIdenticalBSTsHelper(v1, v2, i+1, j+1, minValue, v1[i])
        && checkIdenticalBSTsHelper(v1, v2, i+1, j+1, v1[i], maxValue);

}

bool checkIdenticalBSTs(vector<int>& v1, vector<int>& v2){
    return checkIdenticalBSTsHelper(v1, v2, 0, 0, INT_MIN, INT_MAX);
}

int main(){
    cout << "Enter input_" << endl;
    int n; cin >> n;
    vector<int> v1(n), v2(n);
    for(int i = 0; i < n; i++){
        cin >> v1[i];
    }
    for(int i = 0; i < n; i++){
        cin >> v2[i];
    }

    if(checkIdenticalBSTs(v1, v2))
        cout << "BSTs are identical." << endl;
    else
        cout << "BSTs are not identical." << endl;

    return 0;
}
