class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // vector<int>result;
        
        // for(int i=0;i<nums.size();i++){
        //     long long element=1;
        //     for(int j=0;j<i;j++){
        //         element=element*nums[j];
        //     }
        //     if(i !=nums.size()-1){
        //     for(int k=i+1;k<nums.size();k++){
        //         element=element*nums[k];
        //         }
        //     }
          
        //     result.push_back(element);
        // }
        // return result;

                int n = nums.size();
        vector<int> result(n, 1);

        // Prefix product
        int prefix = 1;

        for (int i = 0; i < n; i++) {
            result[i] = prefix;
            prefix *= nums[i];
        }

        // Suffix product
        int suffix = 1;

        for (int i = n - 1; i >= 0; i--) {
            result[i] *= suffix;
            suffix *= nums[i];
        }

        return result;
    }
};