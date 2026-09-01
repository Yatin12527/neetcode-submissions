class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int,int>mpp;
       vector<vector<int>>freq(nums.size()+1);
       for(int num:nums){
        mpp[num]++;
       }
       for(auto &it:mpp){
        freq[it.second].push_back(it.first);
       }
       vector<int>ans;
       for(int i=freq.size()-1;i>=0;i--){
            for(int j:freq[i]){
                ans.push_back(j);
                if (ans.size() == k) {
                    return ans;
                }
            }
       }
       return ans;
    }
};
