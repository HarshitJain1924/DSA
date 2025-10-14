// two_sum_bruteforce.cpp
// Brute-force solution for Two Sum (returns indices of two numbers that add up to target)
// Time complexity: O(n^2), Space complexity: O(1)

#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSumBruteForce(const vector<int>& nums, int target) {
    int n = nums.size();
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (nums[i] + nums[j] == target) {
                return {i, j}; // return zero-based indices
            }
        }
    }
    return {}; // empty if no solution found
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSumBruteForce(nums, target);
    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << '\n';
        cout << "Values: " << nums[result[0]] << " + " << nums[result[1]] << " = " << target << '\n';
    } else {
        cout << "No two numbers add up to the target.\n";
    }

    return 0;
}
