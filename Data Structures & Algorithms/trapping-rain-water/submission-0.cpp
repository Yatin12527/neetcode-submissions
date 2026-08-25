class Solution {
public:
    int trap(vector<int>& height) {
        int i = 0;
        int j = height.size() - 1;

        int leftMax = height[i];
        int rightMax = height[j];
        int ans = 0;
        while(i<j){
            if(leftMax<rightMax){
                i++;
                leftMax=max(height[i],leftMax);
                ans+=leftMax-height[i];
            }
            else {
                j--;
                rightMax=max(height[j],rightMax);
                ans+=rightMax-height[j];
            }
        }
        return ans;
    }
};