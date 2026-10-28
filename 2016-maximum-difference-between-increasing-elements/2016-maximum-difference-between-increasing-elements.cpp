class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int maximum =-1;
        for(int i=0;i<nums.size();i++){
           for(int j=i+1;j<nums.size();j++){
               int current=0;
               current = nums[j]-nums[i];
               if(current>maximum && current !=0){
                maximum=current;
               }
           }

        }
        if(maximum==-1){
            return -1;
        }else{
            return maximum;
        }
    }
};