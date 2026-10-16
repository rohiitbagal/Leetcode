class Solution {
public:
    int hammingWeight(int n) {
        string numberBit;
        int setCount=0;
        while(n>0){
           int remainder=n%2;
          if(remainder==1){
            setCount++;
          }
           n=n/2;
        }
      
        // for(int i=0;i<=numberBit.size();i++){
        //     if(numberBit[i]=='1'){
        //         setCount++;
        //     }
        // }
        return setCount;
    }
};