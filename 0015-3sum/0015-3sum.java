class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        
        int n = nums.length;
        List<List<Integer>> ans = new ArrayList<>();
        Arrays.sort(nums);
        for( int i = 0 ; i < n ; i++){

            if( nums[i] > 0) {
                break;
            }
            if( i > 0 && nums[i] == nums[i-1]) {
                continue ;
            }

            int left = i + 1;
            int right = n - 1 ;
            while( left< right){

                int sum = nums[i] + nums[left] + nums[right];
                if (sum == 0) {
                    ans.add(Arrays.asList(nums[i], nums[left], nums[right]));

                    // Skip duplicate values for left and right
                    while (left < right && nums[left] == nums[left + 1]) {
                        left++;
                    }
                    while (left < right && nums[right] == nums[right - 1]) {
                        right--;
                    }
                    
                    // Move past the last matching values
                    left++;
                    right--;
                }
                else if( sum < 0){
                   left++;
                }
                else{
                    right--;
                }
            }
        }
        return ans;
    }
}