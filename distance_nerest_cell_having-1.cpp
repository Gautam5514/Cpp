#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<vector<int>> nearest(vector<vector<int>> grid) {
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<int>> vis(n, vector<int>(m,0));
    vector<vector<int>> dist(n, vector<int> (m, 0));
    queue<pair<pair<int, int>, int>> q;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(grid[i][j] == 1) {
                q.push({{i, j}, 0});
                vis[i][j] = 1;
            }
            else {
                vis[i][j] = 0;
            }
        }
    }

    int delRow[] = {-1, 0, +1, 0};
    int delCol[] = {0, +1, 0, -1};

    while(!q.empty()) {
        int row = q.front().first.first;
        int col = q.front().first.second;
        int steps = q.front().second;
        q.pop();
        dist[row][col] = steps;

        for(int i = 0; i < 4; i++) {
            int nrow = row + delRow[i];
            int ncol = col + delCol[i];

            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && vis[nrow][ncol] == 0) {
                vis[nrow][ncol] = 1;
                q.push({{nrow, ncol}, steps + 1});
            }
        }
    }
    return dist;
}

int main() {
    vector<vector<int>> grid
    {
        {0,1,1,0},
        {1,1,0,0},
        {0,0,1,1}
    };
    vector<vector<int>> result = nearest(grid);

    // output the result
    for(int i = 0; i < result.size(); i++) {
        for(int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
// If taking the input from the user
//  int n, m;
//     cout << "Enter the number of rows and columns: ";
//     cin >> n >> m;

//     vector<vector<int>> grid(n, vector<int>(m));
//     cout << "Enter the elements of the matrix (0 or 1):\n";
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cin >> grid[i][j];
//         }
//     }

//     vector<vector<int>> result = nearest(grid);

//     // Output the result
//     cout << "The distances from the nearest 1:\n";
//     for (int i = 0; i < result.size(); i++) {
//         for (int j = 0; j < result[i].size(); j++) {
//             cout << result[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;