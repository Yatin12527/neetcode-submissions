class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>isFirst(nums.begin(),nums.end());
        int ans=0;
        for(int i:nums){
           if(!isFirst.count(i-1)){
            int start=i;
            int count =1;
            while(isFirst.count(start+1)){
                start++;
                count++;
            }
            ans=max(ans,count);
           }
        }
        return ans;
    }
};
