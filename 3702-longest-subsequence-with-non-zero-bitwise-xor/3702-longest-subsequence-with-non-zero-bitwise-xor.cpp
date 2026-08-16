class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int xorVal = 0;
        bool any_not_0 = false;
        int n = nums.size();

        for (int x : nums) {
            if (!any_not_0 && x) {
                any_not_0 = true;
            }
            xorVal ^= x;
        }

        if (xorVal) {
            return n;
        }

        return any_not_0 ? n - 1 : 0;
    }
};