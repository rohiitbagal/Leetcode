// class Solution {
// public:
//     vector<int> rearrangeArray(vector<int>& nums) {
//         vector<int>positive;
//         vector<int>negative;
//         vector<int>result;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]>0){
//                 positive.push_back(nums[i]);
//             }else{
//                 negative.push_back(nums[i]);
//             }
//         }
//         int p=0;
//         int n=0;
//         for(int i=0;i<nums.size();i++){
//             if(i%2==0){
//                 result.push_back(positive[p]);
//                 p++;
//             }else{
//                 result.push_back(negative[n]);
//                 n++;
//             }
//         }
//         return result;
//     }
// };

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
       vector<int>pos;
       vector<int>neg;
       vector<int>arr(nums.size());

       for(int i=0;i<nums.size();i++){
        if(nums[i]>0){
            pos.push_back(nums[i]);
            cout<<nums[i];
        }else{
            neg.push_back(nums[i]);
        }
       }
    
       int postive=0;
       int negitive=0;
       for(int i=0;i<nums.size();i++){
             if (i % 2 == 0) {
                arr[i] = pos[postive];
                postive++;
            } else {
                arr[i] = neg[negitive];
                negitive++;
            }
       }
       return arr;



























        // vector<int> result(nums.size());

        // int p = 0;
        // int n = 1;

        // for (int num : nums) {
        //     if (num > 0) {
        //         result[p] = num;
        //         p += 2;
        //     } else {
        //         result[n] = num;
        //         n += 2;
        //     }
        // }

        // return result;
    }
};