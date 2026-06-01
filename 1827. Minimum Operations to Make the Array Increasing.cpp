class Solution {
public:
    int minOperations(vector<int>& nums) {
        int operations = 0;
        
        for (size_t i = 1; i < nums.size(); i++) {
            
            if (nums[i] <= nums[i - 1]) {
              
                int targetValue = nums[i - 1] + 1;
                
                operations += (targetValue - nums[i]);
                
                nums[i] = targetValue;
            }
        }
        
        return operations;
    }
};
