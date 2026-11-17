class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==1){
            return 1;
        }
        if(nums.size()==0){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int sequence=1;
        int c=1;
        for(int i=1;i<n;i++){
            if(nums[i-1]+1==nums[i]){
              c++;
              if(sequence<c){
                sequence=c;
              }
            }else if(nums[i-1]==nums[i]){
                  if(sequence<c){
                sequence=c;
              }
            }else{
                c=1;
            }
        }
        return sequence;
    }
};