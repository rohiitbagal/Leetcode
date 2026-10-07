class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
              int maxoncce=0;
              int onecount=0;
               for(int i=0;i<nums.size();i++){
                  if(nums[i] == 1){
                    onecount++;
                    if(maxoncce<onecount){
                        maxoncce=onecount;
                    }
                  }else{
                    if(maxoncce<onecount){
                        maxoncce=onecount;
                    }
                    onecount=0;
                  }
               }
               return maxoncce;
    }
};