class Solution {
public:
    int climbStairs(int n) {
       vector<int>dp(n);
       if(n==1){
        return 1;
       }
       dp[0]=1;
       dp[1]=2;
       for(int i=2;i<n;i++){
        dp[i]=dp[i-2]+dp[i-1];
       }
       return dp[n-1];























        // if(n==0)return 1;
        // if(n==1) return 1;
        // long left=climbStairs(n-1);
        // long right=climbStairs(n-2);
        // return left+right;

    //    if(n == 1)
    //    return 1;
    //    vector<int>dp(n+1);
    //    dp[1]=1;
    //    dp[2]=2;
    //    for(int i=3;i<=n;i++){
    //      dp[i]=dp[i-1]+dp[i-2];
    //    }
    //    return dp[n];
    }
};