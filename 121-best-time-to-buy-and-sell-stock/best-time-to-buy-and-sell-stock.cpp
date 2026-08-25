class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=0,r=1;
        int mp=0;
        int n=prices.size();
        while(r<n){
            if(prices[l]>prices[r]){
                l=r;
                r++;
            }
            else{
                int profit=prices[r]-prices[l];
                mp=max(profit,mp);
                r++;
            }
        }
    return mp;
    }
};