class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
           

        if (nums.size() == 1) return nums; 
        if (nums.size() == 2) return nums;
        
        vector<int>arr1 ;
        vector<int>arr2;
        vector<int>result ;

        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);

for( int i = 2 ; i < nums.size() ; i++){
      
      if( arr1[arr1.size()-1]  > arr2[arr2.size()-1]){
          arr1.push_back(nums[i]);
      }
      else{
        arr2.push_back(nums[i]);
      }   
}

for( int i = 0; i < arr1.size(); i++){
    result.push_back(arr1[i]);
}
for( int i = 0; i < arr2.size(); i++){
    result.push_back(arr2[i]);
}
           return result;
    }
};