class Solution {
public:
    string largestOddNumber(string num) {

        int oddIndex = -1;

        // Traverse from right to left
        for(int i = num.size() - 1; i >= 0; i--) {

            if((num[i] - '0') % 2 != 0) {
                oddIndex = i;
                break;
            }
        }

        if(oddIndex == -1)
            return "";

        return num.substr(0, oddIndex + 1);
    }
};