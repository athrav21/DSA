class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int res=0,cs=0;
        mp[0]=1;
        for(int i=0;i<nums.size();i++){
            cs+=nums[i];
            int d=cs-k;
            if(mp.find(d) != mp.end()) {
                res += mp[d];
            }
            mp[cs]++;
        }
    return res;
    }
};