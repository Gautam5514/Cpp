#include <iostream>
using namespace std;

string kangaroo(int x1, int v1, int x2, int v2) {
    if (v1 == v2) {
        if (x1 == x2) {
            return "YES"; // Kangaroos start at the same position and have the same jump distance.
        } else {
            return "NO";  // Kangaroos have the same jump distance but start at different positions.
        }
    }

    // The kangaroos will meet if the following equation is satisfied.
    // (x2 - x1) % (v1 - v2) == 0
    if ((x2 - x1) % (v1 - v2) == 0 && (x2 - x1) / (v1 - v2) >= 0) {
        return "YES"; // Kangaroos will meet at the same position.
    } else {
        return "NO";  // Kangaroos will not meet at the same position.
    }
}

int main() {
    int x1, v1, x2, v2;
    cin >> x1 >> v1 >> x2 >> v2;

    string result = kangaroo(x1, v1, x2, v2);
    cout << result << endl;

    return 0;
}
