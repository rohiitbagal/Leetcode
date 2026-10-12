class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());

        string str = "";
        string result = "";

        for (int i = 0; i < s.size(); i++) {

            if (s[i] == ' ') {

                if (str.size() > 0) {
                    reverse(str.begin(), str.end());

                    if (result.size() > 0)
                        result += ' ';

                    result += str;
                    str = "";
                }

            } else {
                str += s[i];
            }
        }

        // Add the last word
        if (str.size() > 0) {
            reverse(str.begin(), str.end());

            if (result.size() > 0)
                result += ' ';

            result += str;
        }

        return result;
    }
};