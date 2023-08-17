#include <iostream>
#include <vector>
using namespace std;

vector<int> breakingRecords(vector<int> scores) {
    int n = scores.size();
    int minScore = scores[0]; // Initialize minScore with the first score
    int maxScore = scores[0]; // Initialize maxScore with the first score
    int minBreaks = 0; // Initialize the counter for breaking the least points record
    int maxBreaks = 0; // Initialize the counter for breaking the most points record
    
    for (int i = 1; i < n; i++) {
        if (scores[i] < minScore) {
            minScore = scores[i];
            minBreaks++;
        } else if (scores[i] > maxScore) {
            maxScore = scores[i];
            maxBreaks++;
        }
    }
    
    vector<int> result = {maxBreaks, minBreaks};
    return result;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> scores(n);
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }
    
    vector<int> recordBreaks = breakingRecords(scores);
    cout << recordBreaks[0] << " " << recordBreaks[1] << endl;
    
    return 0;
}
