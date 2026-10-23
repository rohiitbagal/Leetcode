class Solution {
public:
    void reverseString(vector<char>& s) {
        int size=s.size()-1;
        int start=0;
        while(start<size){
            swap(s[start],s[size]);
            start++;
            size--;
        }
    }
};