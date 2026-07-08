class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans=nums[0];
        int bestend=nums[0]; int worstend=nums[0];
        for (int i = 1; i < nums.size(); i++){
            int v2=nums[i]*bestend;
            int v1=nums[i];
            int v3=nums[i]*worstend;
            bestend=max(v1,max(v2,v3));
            worstend=min(v1,min(v2,v3));
            ans=max(ans,max(worstend,bestend));

        }
        return ans;
        
    }
};