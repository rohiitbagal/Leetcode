class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mpp;
        int maximum=-1;
        int maximumelement=0;
        for(int a : nums){
            mpp[a]++;
        }
        for(auto i : mpp){
            if(i.second >maximum){
                maximum=i.second;
            }
        }
        for(auto i:mpp){
            if(i.second==maximum){
               maximumelement+=i.second;
            }
        }
        if(maximumelement==0){
            return -1;
        }else{
            return maximumelement;
        }
    }
};