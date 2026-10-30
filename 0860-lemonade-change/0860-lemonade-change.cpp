class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        // sort(bills.begin(),bills.end());
        int fiveCount=0;
        int tenCount=0;
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5){
                fiveCount++;
            }
            if(bills[i]==10){
                fiveCount--;
                tenCount++;
                if(fiveCount <0|| tenCount<0 ){
                    cout<<"inside of 10"<<fiveCount<<endl;
                    cout<<tenCount<<endl;
                    return false;
                }
            }
             if(bills[i]==20){
                    if (tenCount > 0 && fiveCount > 0) {
                        tenCount--;
                        fiveCount--;
                    }
                    else if (fiveCount >= 3) {
                        fiveCount -= 3;
                    }
                    else {
                        return false;
                    }
            }
        }
        return true;
    }
};