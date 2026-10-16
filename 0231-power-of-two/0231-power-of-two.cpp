// class Solution {
// public:
//     bool isPowerOfTwo(int n) {
//         if(n<=0){
//             return false;
//         }
//         if(n %2 !=0 && n!=1){
//             return false;
//         }
//         for(int i=0;i<=sqrt(n)+1;i++){
//            unsigned  long long result=pow(2,i);
//             if(result==n){
//                 return true;
//             }
//         }
//         return false;
//     }
// };

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) {
            return false;
        }

        return (n & (n - 1)) == 0;
    }
};