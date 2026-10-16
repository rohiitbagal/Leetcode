class Solution {
public:
    int hammingWeight(int n) {
        string numberBit;
        int setCount=0;
        while(n>0){
           int remainder=n%2;
           char c=remainder+'0';
           cout<<c<<endl;
           numberBit+=c;
           n=n/2;
        }
        cout<<numberBit;
        for(int i=0;i<=numberBit.size();i++){
            if(numberBit[i]=='1'){
                setCount++;
            }
        }
        return setCount;
    }
};