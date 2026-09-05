class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> mx(n,0);
        vector<int> mn(n,0);
        int maxi=INT_MIN, mini=INT_MAX;
        for(int i=0;i<n;i++){
            maxi=max(maxi,nums[i]);
            mx[i]=maxi;
            mini=min(mini,nums[n-i-1]);
            mn[n-i-1]=mini;
        }
        int ans=INT_MAX;
        for(int i=0; i<n;i++){
            if(mx[i]-mn[i]<=k){
                ans=min(i,ans);
            }
        }
        if(ans==INT_MAX){
            return -1;
        }
        return ans;
    }
};