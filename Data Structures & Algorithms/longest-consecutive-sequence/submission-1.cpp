class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int ans = 0;
        for (int i : nums) {
            int current = i;
            if (!st.count(current - 1)) {
                int count = 1;
                while (st.count(current + 1)) {
                    current++;
                    count++;
                }
                ans = max(count, ans);
            }
        }
        return ans;
    }
};
