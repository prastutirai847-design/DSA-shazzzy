class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int ans=abs(nums[0]),worstend=nums[0],bestend=nums[0];
        for (int i = 1; i < nums.size(); i++){
            int v1=bestend+nums[i];
            int v2=worstend+nums[i];
            int v3=nums[i];
            bestend=max(v3,max(v2,v1));
            worstend=min(v3,min(v2,v1));
            ans=max(abs(ans),max(abs(bestend),abs(worstend)));
        }
        
        return ans;
        
    }
};