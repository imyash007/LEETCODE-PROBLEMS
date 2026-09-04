class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int maxi=INT_MIN, sm=INT_MAX, n=nums.size();

        for(int i=0;i<n;i++){
            int mini=INT_MAX;
            maxi=max(maxi, nums[i]);
            for(int j=i;j<n;j++){
                mini=min(mini, nums[j]);
            }
            int dif=maxi-mini;
            if(dif<=k && i<sm){
                sm=i;
            }
        } 
        if(sm==INT_MAX) return -1;

        return sm;
    }
};