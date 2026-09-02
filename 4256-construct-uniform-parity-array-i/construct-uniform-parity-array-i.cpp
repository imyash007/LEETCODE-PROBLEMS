class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n= nums1.size();

        vector<int> nums2, nums3;

        for(int i=0;i<n;i++){
            if(nums1[i]%2==0){
                nums2.push_back(nums1[i]);
            }
            else{
                for(int j=0;j<n;j++){
                    if(i==j){
                        continue;
                    }
                    if(nums1[j]%2==0){
                        nums2.push_back(nums1[j]);
                        break;

                    } 
                }
            }
        }
        for(int i=0;i<n;i++){
            if(nums1[i]%2!=0){
                nums3.push_back(nums1[i]);
            }
            else{
                for(int j=0;j<n;j++){
                    if(i==j){
                        continue;
                    }
                    if(nums1[j]%2!=0){
                        nums3.push_back(nums1[j]);
                        break;

                    } 
                }
            }
        }

        if(nums2.size()==n || nums3.size()==n) return true;
        return false;

    }
};