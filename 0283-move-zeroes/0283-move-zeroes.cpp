class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>result;
        int zeroCount=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                result.push_back(nums[i]);
            }else{
                zeroCount++;
            }
        }
        for(int i=1;i<=zeroCount;i++){
            result.push_back(0);
        }
        for(int i=0;i<nums.size();i++){
            nums[i]=result[i];
        }
    }
};