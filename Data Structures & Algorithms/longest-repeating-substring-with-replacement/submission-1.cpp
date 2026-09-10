class Solution {
public:
    int characterReplacement(string s, int k) {
      unordered_map<char,int>mpp;
      int ans=0;
      int maxi=0;
      int l=0;
      for(int i=0;i<s.size();i++){
        mpp[s[i]]++;
        maxi=max(maxi,mpp[s[i]]);
        while((i-l+1-maxi)>k){
            mpp[s[l]]--;
            l++;
        }
        ans=max(ans,i-l+1);
      }
      return ans;  
    }
};
