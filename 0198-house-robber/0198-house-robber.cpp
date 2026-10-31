class Solution {
public:
    int rob(vector<int>& nums) {
    //    int maxmoney=0;
    //    int maxmoneyd=0;
    //    for(int i=0;i<nums.size();i=i+2){
    //      maxmoney+=nums[i];
    //    }
    //    for(int i=1;i<nums.size();i=i+2){
    //     maxmoneyd+=nums[i];
    //    }
    //     int maxi=max(maxmoney,maxmoneyd);
    //     return maxi;
         int n=nums.size();
     vector<int>dp(n+1);
     dp[0]=nums[0];
     if(nums.size()==1){
        return dp[0];
     }
     if(nums.size()==2){
        return max(nums[0],nums[1]);
     }
     dp[1]=max(dp[0],nums[1]);

     for(int i=2;i<nums.size();i++){
        int a=dp[i-2]+nums[i];
        dp[i]=max(a,dp[i-1]);
     }
     return dp[n-1];















        // int n=nums.size();
        //  if (n == 1)
        //     return nums[0];
        // vector<int>dp(n+1);
        // dp[0]=nums[0];
        // dp[1]=max(nums[1],nums[0]);
        // for(int i=2;i<n;i++){
        //     int a=dp[i-2]+nums[i];
        //     dp[i]=max(a,dp[i-1]);
        // }
        // return dp[n-1];
    }
};