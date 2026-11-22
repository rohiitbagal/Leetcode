class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>ans;
        vector<int>result;
        for(auto i: nums){
            ans[i]++;
        }
        vector<pair<int,int>>v(ans.begin(),ans.end());
        sort(v.begin(), v.end(), [](auto a, auto b) {

        if(a.second == b.second) {
            return a.first < b.first;
        }
           return a.second > b.second;
        });
        int s=0;
        for(auto i:v){
            if(s==k){
                break;
            }else{
                result.push_back(i.first);
                s++;
            }
        }
        return result;
    }
};