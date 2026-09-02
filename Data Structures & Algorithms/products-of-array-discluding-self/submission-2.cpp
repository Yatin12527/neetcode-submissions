class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans(nums.size());
        int prefix=1;
        ans[0]=1;
        for(int i=0;i<nums.size()-1;i++){
            prefix*=nums[i];
            ans[i+1]=prefix;
        }
        int postfix=1;
        for(int i=nums.size()-1;i>=1;i--){
            postfix*=nums[i];
            ans[i-1]*=postfix;
        }
        return ans;
    }
};
