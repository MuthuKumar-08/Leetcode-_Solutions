/*
Approach:
- The array size is 2N, where exactly one element is repeated N times.
- Since the repeated element appears many times, it must occur close to itself.
- We compare each element with the previous one and the element two positions before.
- If nums[i] matches nums[i-1] or nums[i-2], then nums[i] is the repeated element.
- This avoids sorting and extra space.

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size();

        for (int i = 2; i < n; i++) {
            if (nums[i] == nums[i - 1] || nums[i] == nums[i - 2]) {
                return nums[i];
            }
        }

        // Edge case: if repeated element appears at the beginning
        return nums[0];
    }
};
