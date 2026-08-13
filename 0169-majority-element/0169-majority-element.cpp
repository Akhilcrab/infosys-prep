class Solution {
public:
    int majorityElement(vector<int>& nums) {
         int ans = 0;
         int n = nums.size();
    unordered_map<int , int> m;
    for( int i = 0 ; i< n ; i++){
         m[nums[i]]++;
    }
    for( const auto&pair : m){
    if ( pair.second > n/2){
        ans = pair.first ;
    } 
}
return ans; 
    }
};