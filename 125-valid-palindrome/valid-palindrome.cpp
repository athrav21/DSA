class Solution {
public:
    bool isPalindrome(string s) {
        string ans="";
        bool b=true;
        for(int i=0;i<s.length();i++){
            if(isalnum(s[i])){
                ans+=tolower(s[i]);
            }
        }
        string c=ans;
        reverse(ans.begin(),ans.end());
    return ans==c;
    }
};