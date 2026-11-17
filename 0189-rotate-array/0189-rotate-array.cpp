// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         int n = nums.size();

//         if(n == 0) return;

//         k = k % n;

//         while(k--) {
//             vector<int> ans;

//             ans.push_back(nums[n-1]);

//             for(int i = 0; i < n-1; i++) {
//                 ans.push_back(nums[i]);
//             }

//             for(int i = 0; i < n; i++) {
//                 nums[i] = ans[i];
//             }
//         }
//     }
// };


class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();

        if(n == 0) return;

        k = k % n;

        // Reverse entire array
        reverse(nums.begin(), nums.end());

        // Reverse first k elements
        reverse(nums.begin(), nums.begin() + k);

        // Reverse remaining elements
        reverse(nums.begin() + k, nums.end());
    }
};