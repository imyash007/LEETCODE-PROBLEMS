class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return 1;

        int maxi = 0, mini = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[maxi]) maxi = i;
            if (nums[i] < nums[mini]) mini = i;
        }

        int i = min(mini, maxi);
        int j = max(mini, maxi);

        int fromFront = j + 1;
        int fromBack  = n - i;
        int bothEnds  = (i + 1) + (n - j);

        return min({fromFront, fromBack, bothEnds});
    }
};