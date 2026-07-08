class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=INT_MIN;int bestend=0;
        for(int i=0; i<nums.size();i++){
            int v1=bestend+nums[i];
            int v2=nums[i];
            bestend=max(v1,v2);
            ans=max(bestend,ans);

        }
        return ans;
        
    }
};