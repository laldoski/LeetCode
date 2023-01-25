class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> output;
        bool status = false;
        
      for (int i = 0 ; i < nums.size() ; i++){
          for (int j = 1 +i ; j < nums.size(); j++){
         if (nums[i]+nums[j]==target){
               return {i,j};
            }
    }
     }
     return {};
    }
};