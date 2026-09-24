class Solution {
    int digitsum(int a){
        int sum = 0 ;
        while( a > 0){
            int digit = a%10;
            sum += digit;
            a = a/10;
        }
        return sum ;
    }
public:
    int smallestIndex(vector<int>& nums) {
       
        for( int i = 0 ; i < nums.size() ; i++){
          if( i == digitsum(nums[i])){
              return i;
          }  
        }
        return -1 ;
    }
};