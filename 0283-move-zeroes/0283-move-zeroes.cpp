class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans;
        int totalZerocount = 0;

        // Store all non-zero elements
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                totalZerocount++;
            } else {
                ans.push_back(nums[i]);
            }
        }

        // Add zeros at the end
        for (int i = 0; i < totalZerocount; i++) {
            ans.push_back(0);
        }

        // Copy answer back into nums
        for (int i = 0; i < nums.size(); i++) {
            nums[i] = ans[i];
        }
    }
};