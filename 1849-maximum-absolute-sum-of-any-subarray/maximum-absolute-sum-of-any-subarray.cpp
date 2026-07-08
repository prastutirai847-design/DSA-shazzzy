class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int bestend=nums[0],worstend=nums[0];int ans=nums[0];
       for (int i = 1; i <nums.size();  i ++ ){
        int v1=bestend+nums[i];
        int v2=worstend+nums[i];
        int v3=nums[i];
         bestend=max(v3,v1);
        worstend=min(v3,v2);
       
        ans=max(ans,max(   abs(worstend),abs(bestend)));
       
       } 
       if(ans<0)
       return abs(ans);
       else
       return ans; 
       
    }
};