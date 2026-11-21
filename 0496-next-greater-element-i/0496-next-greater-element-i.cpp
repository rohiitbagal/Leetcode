// class Solution {
// public:
//     vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
//         stack<int>ans;
//         vector<int>result;
//         // for(int i=0;i<nums1.size();i++){
//         //     int find=0;
//         //     for(int j=0;j<nums2.size();j++){
//         //         if(nums2[j]>nums1[i]){
//         //             find=nums2[j];
//         //             break;
//         //         }
//         //     }
//         //     if(find==0){
//         //         ans.push_back(-1);
//         //     }else{
//         //         ans.push_back(find);
//         //     }
//         // }
//         // return ans;


//         for(auto i: nums2){
//             ans.push(i);
//         }
//         for(int i=0;i<nums1.size();i++){
//             int find=0;
//         for(auto j: ans){
//             if(j>nums1[i]){
//                 result.push_back(j);
//                 ans.pop();
//                 find=1;
//             }
//         }
//         if(find==0){
//             result.push_back(-1);
//         }
//         }
//         return result;
//     }
// };

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        stack<int> st;
        unordered_map<int, int> mp;
        vector<int> result;

        for(int i = nums2.size() - 1; i >= 0; i--) {

            while(!st.empty() && st.top() <= nums2[i]) {
                st.pop();
            }

            if(st.empty()) {
                mp[nums2[i]] = -1;
            }
            else {
                mp[nums2[i]] = st.top();
            }

            st.push(nums2[i]);
        }

        for(int i = 0; i < nums1.size(); i++) {
            result.push_back(mp[nums1[i]]);
        }

        return result;
    }
};