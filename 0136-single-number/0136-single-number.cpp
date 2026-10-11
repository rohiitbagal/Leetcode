class Solution {
public:
    int singleNumber(vector<int>& nums) {
    //  sort(nums.begin(),nums.end());
    //  if(nums.size()==1){
    //      return nums[0];
    //  }
    //  for(int i=0;i<=nums.size();i+=2){
    //     if( nums[i]!=nums[i+1]){
    //         return nums[i];
    //     }
    //    }
    //  return -1;
    unordered_map<int,int>ans;
    for(int i: nums){
        ans[i]++;
    }
    for(auto i: ans){
        if(i.second==1){
            return i.first;
        }
    }
    return -1;

    }
};