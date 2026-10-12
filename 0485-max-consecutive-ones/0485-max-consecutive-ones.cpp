class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxiOnce = 0;
        int thisMax = 0;

        for(int i = 0; i < nums.size(); i++) {

            if(nums[i] == 1) {
                thisMax++;
            }
            else {
                maxiOnce = max(maxiOnce, thisMax);
                thisMax = 0;
            }
        }

        maxiOnce = max(maxiOnce, thisMax);

        return maxiOnce;
    }
};