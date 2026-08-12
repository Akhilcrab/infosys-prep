class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int left = 0;
        int maxlength = INT_MIN;
        unordered_map<int , int> m ;
        for( int right = 0 ; right < nums.size() ; right++){
           m[nums[right]]++;
           while( m[nums[right]] > k){
            m[nums[left]]--;
             left++;
           }
           int length = ( right - left + 1)  ;
           maxlength = max( length , maxlength);
        }
        return maxlength ;
    }
};