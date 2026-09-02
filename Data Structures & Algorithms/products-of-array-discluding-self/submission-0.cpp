class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // do zero k lie sb zero
        // ek zero k lie except the zero sb zero
        int productSimple = 1;
        int productNonsimple = 1;
        int count = 0;
        for (int i : nums) {
            if (i == 0) {
                count++;
            }
        }
        vector<int> ans;
        if (count > 1) {
            for (int i = 0; i < nums.size(); i++) {
                ans.push_back(0);
            }
            return ans;
        }
        if (count < 1) {
            for (int i = 0; i < nums.size(); i++) {
                productSimple *= nums[i];
            }
            for (int i = 0; i < nums.size(); i++) {
                ans.push_back(productSimple / nums[i]);
            }
            return ans;
        }
        if (count == 1) {
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] == 0) {
                    continue;
                }
                productNonsimple *= nums[i];
            }
            for (int i = 0; i < nums.size(); i++) {
                ans.push_back(nums[i] == 0 ? productNonsimple : 0);
            }
            return ans;
        }
        return ans;
    }
};
