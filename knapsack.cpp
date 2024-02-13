#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Structure representing an item with value and weight
struct Item {
    int value;
    int weight;
};

// Comparison function for sorting items based on value-to-weight ratio in descending order
bool cmp(Item i1, Item i2) {
    double v_w_i1 = static_cast<double>(i1.value) / i1.weight;
    double v_w_i2 = static_cast<double>(i2.value) / i2.weight;
    return v_w_i1 > v_w_i2;
}

// Function to solve the fractional knapsack problem
double fractionalKnapsack(int W, vector<Item>& items) {
    double ans = 0;

    // Sort items based on value-to-weight ratio
    sort(items.begin(), items.end(), cmp);

    // Iterate through sorted items
    for (const auto& item : items) {
        // If the entire item can fit in the knapsack
        if (item.weight <= W) {
            ans += item.value;  // Add entire item value to the result
            W -= item.weight;   // Reduce knapsack capacity
        } else {
            // If only a fraction of the item can fit
            double fraction = static_cast<double>(W) / item.weight;
            ans += fraction * item.value;  // Add fraction of item value to the result
            W = 0;  // No need to process further if the knapsack is full
        }
    }

    return ans;  // Return the total value of items in the knapsack
}

int main() {
    // Input the number of items and knapsack capacity
    int n, w;
    cin >> n >> w;

    // Input the values and weights of items
    vector<Item> items;
    for (int i = 0; i < n; i++) {
        int v, wt;  // Value and weight of the item
        cin >> v >> wt;
        Item it;
        it.value = v;
        it.weight = wt;
        items.push_back(it);  // Add the item to the vector
    }

    // Output the result of the fractional knapsack problem
    cout << fractionalKnapsack(w, items) << "\n";

    return 0;
}
