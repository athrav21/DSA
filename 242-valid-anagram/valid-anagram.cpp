class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        bool b=false;
        if(s==t){
            b=true;
        }
    return b;
    }
};