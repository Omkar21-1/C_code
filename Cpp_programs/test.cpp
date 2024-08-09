#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& a) {
        if (a.size() <= 1) {
            return a;
        }

        // Sort intervals based on their start time
        sort(a.begin(), a.end());

        vector<vector<int>> ans;
        // Initialize the first interval as the current interval
        vector<int> currentInterval = a[0];

        for (int i = 1; i < a.size(); ++i) {
            // If the current interval overlaps with the next interval
            if (currentInterval[1] >= a[i][0]) {
                // Merge the intervals
                currentInterval[1] = max(currentInterval[1], a[i][1]);
            } else {
                // No overlap, push the current interval to ans and update currentInterval
                ans.push_back(currentInterval);
                currentInterval = a[i];
            }
        }

        // Add the last interval
        ans.push_back(currentInterval);

        return ans;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {8, 9}, {9, 11}, {15, 18}, {2, 4}, {16, 17}};
    vector<vector<int>> result = sol.merge(intervals);

    cout << "Merged intervals: ";
    for (const auto& interval : result) {
        cout << "[" << interval[0] << ", " << interval[1] << "] ";
    }
    cout << endl;

    return 0;
}
