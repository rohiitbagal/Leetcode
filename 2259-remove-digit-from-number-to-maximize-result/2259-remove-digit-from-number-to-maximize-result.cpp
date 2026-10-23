class Solution {
public:
    string removeDigit(string number, char digit) {
        string result="";
        bool flag=false;
        for(int i=0;i<number.size();i++){
               if(number[i]==digit && flag==false && number[i+1]>digit && i+1<number.size()){
                    flag=true;
               }else{
                result+=number[i];
               }
        }
           if (flag == false) {
            int pos = number.rfind(digit);
            number.erase(pos, 1);
            return number;
        }
        return result;
    }
};