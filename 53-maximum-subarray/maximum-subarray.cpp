class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=INT_MIN;int bestend=0;
        for(int i=0; i<nums.size();i++){
            
            bestend=max(bestend+nums[i],nums[i]);
            ans=max(bestend,ans);

        }
        return ans;
        
    }
};