class Solution {
public:
    string longestPalindrome(string s) {
        if(s.length()<=1){
            return s;
        }
        string pal="";
        string l="";
        for(int i=0;i<s.length();i++){
            int low=i;
            int high=i;
            while(low >= 0 && high < s.length() && s[low] == s[high]){
                low--;
                high++;
            }
            pal=s.substr(low+1,high-low-1);
            if(pal.length()>l.length()){
                l=pal;
            }
            low=i-1;
            high=i;
            while(low >= 0 && high < s.length() && s[low] == s[high]){
                low--;
                high++;
            }
            pal=s.substr(low+1,high-low-1);
            if(pal.length()>l.length()){
                l=pal;
            }
        }
    return l;
    }
};