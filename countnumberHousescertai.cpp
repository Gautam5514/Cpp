#include<bits/stdc++.h>
using namespace std;

vector<int> minDistancepairs(int n, int x, int y) {
    vector<int> result(n, 0);

    for(int house1 = 1; house1 <= n; house1++) {
        for(int house2 = 1; house2 <= n; house2++) {

            int distance = abs(house1 - house2);

            distance = min(distance, abs(house1 - x) + 1 + abs(house2 - y));
            distance = min(distance, abs(house1 - y) + 1 + abs(house2 - x));

            if(distance > 0 && distance <= n) {
                result[distance -1]++;
            }
        }
    }
    return result;
}
int main() {
    int n1 = 3, x1 = 1, y1 = 3;
    vector<int> result1 = minDistancepairs(n1, x1, y1);
    cout << " Output for example 1:";
    for (int val : result1) {
        cout << val << " ";
    }
    cout <<endl;

    int n2 = 5, x2 = 2, y2 = 4;
    vector<int> result2 = minDistancepairs(n2, x2, y2);
    cout << "Output for example 2 :";
    for(int val : result2) {
        cout << val << " ";
    }

    cout <<endl;
    return 0;
}