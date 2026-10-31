class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());

        vector<int> temp;

        temp.push_back(intervals[0][0]);
        temp.push_back(intervals[0][1]);

        ans.push_back(temp);
        temp.clear();

        int last = 0;

        for(int i = 1; i < intervals.size(); i++) {

            int a = ans[last][0];
            int b = ans[last][1];

            if(b >= intervals[i][0]) {

                ans[last][1] = max(b, intervals[i][1]);

            }
            else {

                temp.push_back(intervals[i][0]);
                temp.push_back(intervals[i][1]);

                ans.push_back(temp);
                temp.clear();

                last++;
            }
        }

        return ans;











    //    vector<vector<int>>ans;
    //    sort(intervals.begin(),intervals.end());
    //    for(int i=0;i<intervals.size()-1;i++){
    //     vector<int>temp;
    //     if((intervals[i][1])>=intervals[i+1][0]){
    //         temp.push_back(intervals[i][0]);
    //         temp.push_back(intervals[i+1][1]);
    //         i++;
    //     }else{
    //         temp.push_back(intervals[i][0]);
    //         temp.push_back(intervals[i][1]);
    //     }
    //     ans.push_back(temp);
    //     temp.clear();
    //    } 
    //    return ans;
    }
};