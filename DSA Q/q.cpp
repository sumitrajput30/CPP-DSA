
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <limits>

using namespace std;

int main() {
    string X, Y;
    cin >> X >> Y;

    int S, R;
    cin >> S >> R;

    int lenX = X.length();
    int lenY = Y.length();

    // Reverse Y
    string revY = Y;
    reverse(revY.begin(), revY.end());

    // Initialize DP table
    vector<vector<int>> dp(lenX + 1, vector<int>(lenY + 1, numeric_limits<int>::max()));

    // Base case: to form an empty X, we need 0 substrings
    for (int j = 0; j <= lenY; ++j) {
        dp[0][j] = 0;
    }

    // Fill DP table for Y
    for (int i = 1; i <= lenX; ++i) {
        for (int j = 1; j <= lenY; ++j) {
            // Check substrings ending at Y[j-1]
            for (int k = j; k >= 1; --k) {
                if (Y.substr(k-1, j-k+1) == X.substr(i-1, j-k+1)) {
                    dp[i][j] = min(dp[i][j], dp[i - (j - k + 1)][k - 1] + 1);
                }
            }
        }
    }

    // Initialize the reverse DP table
    vector<vector<int>> revDp(lenX + 1, vector<int>(lenY + 1, numeric_limits<int>::max()));

    // Base case: to form an empty X, we need 0 substrings
    for (int j = 0; j <= lenY; ++j) {
        revDp[0][j] = 0;
    }

    // Fill DP table for reversed Y
    for (int i = 1; i <= lenX; ++i) {
        for (int j = 1; j <= lenY; ++j) {
            // Check substrings ending at revY[j-1]
            for (int k = j; k >= 1; --k) {
                if (revY.substr(k-1, j-k+1) == X.substr(i-1, j-k+1)) {
                    revDp[i][j] = min(revDp[i][j], revDp[i - (j - k + 1)][k - 1] + 1);
                }
            }
        }
    }

    // Find minimum substrings required from both Y and reversed Y
    int minSubstrings = numeric_limits<int>::max();
    for (int j = 0; j <= lenY; ++j) {
        if (dp[lenX][j] != numeric_limits<int>::max()) {
            minSubstrings = min(minSubstrings, dp[lenX][j]);
        }
        if (revDp[lenX][j] != numeric_limits<int>::max()) {
            minSubstrings = min(minSubstrings, revDp[lenX][j]);
        }
    }

    if (minSubstrings == numeric_limits<int>::max()) {
        cout << "Impossible" << endl;
    } else {
        // Calculate String Factor
        int countFromY = dp[lenX][lenY];
        int countFromRevY = revDp[lenX][lenY];

        int stringFactor = (countFromY * S) + (countFromRevY * R);
        cout << stringFactor << endl;
    }

    return 0;
}
