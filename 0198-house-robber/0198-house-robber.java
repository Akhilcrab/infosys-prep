class Solution {
    public int rob(int[] nums) {
        int n = nums.length ;
          
        int prev1 = 0;
        int prev2 = 0;
        for( int i = 0 ; i < n ; i++){

            int take =  nums[i] + prev2;
            int skip =  prev1;

            int current = Math.max(take ,skip);

            prev2 = prev1;
            prev1 = current ;
        }
        return prev1;
    }
}