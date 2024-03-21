#include<iostream>
#include<vector>
using namespace std;

int find(vector<int> &parent, int x) {
    // This method returns which group / cluster before
    return parent[x] = (parent[x] == x) ? x : find(parent, parent[x]);
}

void Union(vector<int> &parent, vector<int> &rank, int a, int b) {
    // This is  the merge in a single parent 

    a = find(parent, a);
    b = find(parent, b);
    // if a is bigger than inc. of (a) and make the parent of (a of b)
    if(rank[a] >= rank[b]) {
        rank[a]++; // inc of a 
        parent[b] = a; // make parent b = a
    } else {
        rank[b]++; // inc. of B
        parent[a] = b; // make the parent of a of b
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    // n -> no of element m -> no. of quarks
    vector<int> parent(n + 1);
    vector<int> rank(n + 1, 0);

    for(int i = 0; i <= n; i++) {
        parent[i] = i;
    }
    while(m--) {
        string str;
        cin >> str;

        if(str == "Union") {
            int x, y;
            cin >> x >> y;
            Union(parent, rank, x, y);
        } else {
            int x;
            cin >> x;
            cout << find(parent, x) << "\n";
        }
    }
    return 0;
}
