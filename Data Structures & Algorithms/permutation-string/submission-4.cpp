class Solution { 
public: 
    bool checkInclusion(string s1, string s2) { 
        if (s1.size() > s2.size()) { 
            return false; 
        }

        vector<int> alpha(26, 0); 
        vector<int> ans(26, 0); 
        
        for (int i = 0; i < s1.size(); i++) { 
            alpha[s1[i] - 'a']++; 
            ans[s2[i] - 'a']++; 
        } 
        
        int i = 0; 
        int matches = 0; 
        for (int x = 0; x < 26; x++) { 
            if (alpha[x] == ans[x]) { 
                matches++; 
            } 
        } 
        
        for (int j = s1.size(); j < s2.size(); j++) { 
            if (matches == 26) { 
                return true; 
            } 
            int r = s2[j] - 'a';
            ans[r]++;
            if (ans[r] == alpha[r]) {
                matches++;
            } else if (ans[r] == alpha[r] + 1) {
                matches--;
            }
            int l = s2[i] - 'a';
            ans[l]--;
            if (ans[l] == alpha[l]) {
                matches++;
            } else if (ans[l] == alpha[l] - 1) {
                matches--;
            }
            i++; 
        } 
        return matches == 26; 
    } 
};
