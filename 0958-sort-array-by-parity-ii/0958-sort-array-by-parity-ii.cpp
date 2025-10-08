class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> arr(nums.size());
        int i = 0;  
        int j = 1;  
        
        for (int p = 0; p < nums.size(); p++) {
            if (nums[p] % 2 == 0) {
                arr[i] = nums[p];
                i += 2;
            } else {
                arr[j] = nums[p];
                j += 2;
            }
        }
        return arr;
    }
};
