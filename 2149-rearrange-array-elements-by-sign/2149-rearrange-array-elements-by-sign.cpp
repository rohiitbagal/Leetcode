class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>positive;
        vector<int>negative;
        vector<int>result;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                positive.push_back(nums[i]);
            }else{
                negative.push_back(nums[i]);
            }
        }
        int p=0;
        int n=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                result.push_back(positive[p]);
                p++;
            }else{
                result.push_back(negative[n]);
                n++;
            }
        }
        return result;
    }
};