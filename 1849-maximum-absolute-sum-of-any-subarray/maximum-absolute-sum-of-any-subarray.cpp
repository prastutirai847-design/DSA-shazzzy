class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int bestend=nums[0],worstend=nums[0];int ans=nums[0];
       for (int i = 1; i <nums.size();  i ++ ){
        
         bestend=max(nums[i],max(bestend+nums[i],nums[i]));
        worstend=min(nums[i],min(worstend+nums[i],nums[i]));
       
        ans=max(ans,max(   abs(worstend),abs(bestend)));
       
       } 
       if(ans<0)
       return abs(ans);
       else
       return ans; 
       
    }
};