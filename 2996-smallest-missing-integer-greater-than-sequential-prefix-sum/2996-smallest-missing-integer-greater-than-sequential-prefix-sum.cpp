class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum = nums[0];
        for( int i = 0 ; i < nums.size() -1 ; i++){
            if( nums[i+1] == nums[i]+1){
                sum += nums[i+1]; 
            }else {
                break;
            }
        }
        unordered_set<int> num( nums.begin() , nums.end());
          while( num.count(sum)){
            sum++;
          }
             return sum;
    }
};