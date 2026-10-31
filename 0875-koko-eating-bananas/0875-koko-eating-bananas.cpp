// class Solution {
// public:
//     int minEatingSpeed(vector<int>& piles, int h) {
//         int maxi=0;
//         for(int i=0;i<piles.size();i++){
//             if(piles[i]>maxi){
//                 maxi=piles[i];
//             }
//         }
//         cout<<maxi;
//         for(int i=1;i<=maxi;i++){
//             long long time=0;
//             for(int j=0;j<piles.size();j++){
//                 long long a=piles[j]/i;
//                 int b=piles[j]%i;
//                 if(b!=0){
//                     a++;
//                 }
//                 time+=a;
//             }
//             if(time<=h){
//                 return i;
//             }
//         }
//         return -1;
//     }
// };


class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());

        while (left <= right) {
            int mid = left + (right - left) / 2;

            long long time = 0;

            for (int pile : piles) {
                time += (pile + mid - 1) / mid;
            }

            if (time <= h) {
                // This speed works.
                // Try to find a smaller speed.
                right = mid - 1;
            } 
            else {
                // This speed is too slow.
                // Need a larger speed.
                left = mid + 1;
            }
        }

        return left;
    }
};