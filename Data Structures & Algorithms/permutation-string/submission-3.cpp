class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>alpha(26,0);
        vector<int>ans(26,0);
        if(s1.size()>s2.size()){
            return false;
        }
        for(int i=0;i<s1.size();i++){
            alpha[s1[i]-'a']++;
            ans[s2[i]-'a']++;
        }
        int i=0;
        for(int j=s1.size();j<s2.size();j++){
            if(alpha==ans){
                return true;
            }
            ans[s2[j]-'a']++;
            ans[s2[i]-'a']--;
            i++;
        }
        return alpha==ans;
    }
};
