class Solution {
public:
    bool isPalindrome(string s) {
        string t = "";
        for(int i = 0; i < s.length(); i++) {
            if(s[i] >= 'A' && s[i] <= 'Z') {
                t += s[i]+32;
            }else if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 48 && s[i] <= 57)) {
                t+=s[i];
            }else {
                continue;
            }
        }
       
        int start = 0, end = t.length()-1;
        while(start<=end) {
            if(t[start] != t[end]) {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};
