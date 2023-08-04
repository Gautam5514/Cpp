// #include<iostream>
// #include<vector>
// #include<list>
// using  namespace std;

// class Hashing{
//     vector<list<int>> hashtable;
//     int buckets;
// public:
//     Hashing(int size){
//         buckets = size;
//         hashtable.resize(size);
//     }
//         int hashvalue(int key){
//             return key%buckets;
//         }
//         void addkey(int key){
//             int idx = hashvalue(key);
//             hashtable[idx].push_back(key);
//         }
//         list<int>::iterator searchKey(int key){
//             int idx = hashvalue(key);
//             return find(hashtable[idx].begin(), hashtable[idx].end(),key);
//         }
//         void deletekey(int key){
//             int idx = hashvalue(key);
//             if(searchKey(key)!=hashtable[idx].end()){
//                 hashtable[idx].erase(searchKey(key));
//                 cout<<key<<" is deleted"<<endl;
//             }
//             else{
//                 cout<<"Key is not present in the hashtable"<<endl;
//             }
//         }
//     };

//     int main(){
//         Hashing h(10);
//         h.addkey(5);
//         h.addkey(9);
//         h.addkey(3);
//         h.deletekey(3);
//         h.deletekey(3);
//         return 0;
//     }
#include<iostream>
#include<vector>
#include<list>
using namespace std;

class Hashing {
    vector<list<int>> hashtable;
    int buckets;
public:
    Hashing(int size) {
        buckets = size;
        hashtable.resize(size);
    }

    int hashvalue(int key) {
        return key % buckets;
    }

    void addkey(int key) {
        int idx = hashvalue(key);
        hashtable[idx].push_back(key);
    }

    list<int>::iterator searchKey(int key) {
        int idx = hashvalue(key);
        return find(hashtable[idx].begin(), hashtable[idx].end(), key);
    }

    void deletekey(int key) {
        int idx = hashvalue(key);
        list<int>::iterator it = searchKey(key);
        if (it != hashtable[idx].end()) {
            hashtable[idx].erase(it);
            cout << key << " is deleted" << endl;
        }
        else {
            cout << "Key is not present in the hashtable" << endl;
        }
    }
};

int main() {
    Hashing h(10);
    h.addkey(5);
    h.addkey(9);
    h.addkey(3);
    h.deletekey(3);
    h.deletekey(3); // This line will now handle the case correctly if 3 is not found.
    return 0;
}
