#include<iostream>
#include<vector>
#include<unordered_set>
#include<list>
using namespace std;

// This is the visited part
unordered_set<int> visited;
vector<list<int>> graph;
int v; // No of Vertices
void add_edge(int src, int dest, bool bi_dir = true) {
    graph[src].push_back(dest);
    if(bi_dir) {
        graph[dest].push_back(src);
    }
}

bool dfs(int curr, int end) {
    if(curr == end) return true; 
    visited.insert(curr); // Mark Visited
    for(auto neighbour : graph[curr]) {
        if(not visited.count(neighbour)) {
            bool result = dfs(neighbour, end);
            if(result) return true;
        }
    }
    return false;
}
bool anyPath(int src, int dest) {
    return dfs(src, dest);
}

int main() {
    cin>>v;
    graph.resize(v, list<int> ());
    int e;
    cin>>e;
    visited.clear();
    while(e--) {
        int s,d;
        cin>>s>>d;
        add_edge(s,d, false);
    }
    int x, y;
    cin>>x>>y;
    cout<<anyPath(x,y) <<"/n";
    return 0;
}