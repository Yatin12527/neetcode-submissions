class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pre(nums.size());
        vector<int> post(nums.size());
        vector<int> ans(nums.size());

        pre[0] = 1;  // ✅ assign directly, not push_back
        for (int i = 0; i < nums.size() - 1; i++) {
            pre[i + 1] = pre[i] * nums[i];  // ✅ use pre[i], not product
        }

        post[nums.size() - 1] = 1;  // ✅ assign directly
        for (int i = nums.size() - 1; i >= 1; i--) {
            post[i - 1] = post[i] * nums[i];  // ✅ use post[i], not product
        }

        for (int i = 0; i < nums.size(); i++) {
            ans[i] = pre[i] * post[i];
        }

        return ans;
    }
};
