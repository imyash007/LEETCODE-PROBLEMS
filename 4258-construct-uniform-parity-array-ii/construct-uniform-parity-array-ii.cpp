class Solution {
public:
    bool uniformArray(vector<int>& A) {
        int xmin = A[0];
        bool odd = 0;
        
        for (auto& x : A) {
            xmin = min(xmin, x);
            odd |= x & 1;//checks if x is odd
        }

        return (xmin & 1) == odd;
    }
};