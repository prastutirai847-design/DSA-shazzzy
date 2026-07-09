class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int bestend= nums[0] , worstend = nums[0] , ans = nums[0] ;
        for (int i = 1; i < nums.size(); i++){
            int v1= bestend*nums[i];
            int v2 = worstend * nums[i]; 
            int v3 =nums[i]; 
            bestend = max(v3,max(v1,v2));
            worstend=min(min(v2,v1),v3);
            ans=max(ans,max(bestend,worstend));
        }
        return ans;
    }
};