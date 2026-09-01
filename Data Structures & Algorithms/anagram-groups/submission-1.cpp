class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mpp;  
        vector<vector<string>> ans;

        for (auto &s : strs) { 
            vector<int> alpha(26, 0);   
            for (char c : s) {    
                alpha[c - 'a']++;
            }
            string key=to_string(alpha[0]);
            for(auto &it:alpha){
                key+=','+ to_string(it);
            }
            mpp[key].push_back(s);
        }

        for (auto &it : mpp) {
            ans.push_back(it.second);  
        }

        return ans;
    }
};
