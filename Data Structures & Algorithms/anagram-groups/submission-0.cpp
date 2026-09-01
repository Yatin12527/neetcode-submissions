class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>, vector<string>> mpp;  
        vector<vector<string>> ans;

        for (auto &s : strs) { 
            vector<int> alpha(26, 0);   
            for (char c : s) {    
                alpha[c - 'a']++;
            }
            mpp[alpha].push_back(s);
        }

        for (auto &it : mpp) {
            ans.push_back(it.second);  
        }

        return ans;
    }
};
